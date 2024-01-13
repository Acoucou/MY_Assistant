/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "app_ui_ctrl.h"
#include "tts_api.h"
#include "app_sr.h"
#include "bsp/esp-bsp.h"
#include "bsp_board.h"
#include "app_audio.h"
#include "app_wifi.h"
#include "settings.h"
#include "esp_crt_bundle.h"
#include "esp_http_client.h"
#include "cJSON.h"

#include "stt_api.h"
#include "chat_api.h"

#define SCROLL_START_DELAY_S (1.5)
static char *TAG = "app_main";
static sys_param_t *sys_param = NULL;


/* program flow. This function is called in app_audio.c */
esp_err_t start_openai(uint8_t *audio, int audio_len)
{
    ESP_LOGE(TAG, "start\n");

    char *recognition_result = baidu_asr(audio, audio_len); // 百度语音转文字
    ESP_LOGE(TAG, "------------text: %s\n", recognition_result);

    if (strlen(recognition_result) == 0)
    {
        ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, "API Key is not valid");
        return ESP_FAIL;
    }
    ESP_LOGE(TAG, "user: %s\n", recognition_result);

    if (strcmp(recognition_result, "invalid_request_error") == 0)
    {
        ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, "Sorry, I can't understand.");
        ui_ctrl_show_panel(UI_CTRL_PANEL_SLEEP, 2000);
        return ESP_FAIL;
    }

    char *response = getGPTAnswer(recognition_result); // 获得chatgpt的回答
    ESP_LOGE(TAG, "------------response: %s\n", response);

    ui_ctrl_show_panel(UI_CTRL_PANEL_GET, 0);
    // UI listen success
    ui_ctrl_label_show_text(UI_CTRL_LABEL_REPLY_QUESTION, recognition_result);
    ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, recognition_result);

    if (response != NULL && (strcmp(response, "invalid_request_error") == 0))
    {
        // UI listen fail
        ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, "Sorry, I can't understand.");
        ui_ctrl_show_panel(UI_CTRL_PANEL_SLEEP, 2000);
        return ESP_FAIL;
    }

    // UI listen success
    ui_ctrl_label_show_text(UI_CTRL_LABEL_REPLY_QUESTION, response);
    ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, response);

    if (strcmp(response, "invalid_request_error") == 0)
    {
        ui_ctrl_label_show_text(UI_CTRL_LABEL_LISTEN_SPEAK, "Sorry, I can't understand.");
        ui_ctrl_show_panel(UI_CTRL_PANEL_SLEEP, 2000);
        return ESP_FAIL;
    }

    ui_ctrl_label_show_text(UI_CTRL_LABEL_REPLY_CONTENT, response);
    ui_ctrl_show_panel(UI_CTRL_PANEL_REPLY, 0);

    ESP_LOGE(TAG, "start tts\n");
    esp_err_t status = text_to_speech_request(response, AUDIO_CODECS_MP3);

    if (status != ESP_OK)
    {
        ESP_LOGE(TAG, "Error creating ChatGPT request: %s\n", esp_err_to_name(status));
        // UI reply audio fail
        ui_ctrl_show_panel(UI_CTRL_PANEL_SLEEP, 0);
    }
    else
    {
        // Wait a moment before starting to scroll the reply content
        vTaskDelay(pdMS_TO_TICKS(SCROLL_START_DELAY_S * 1000));
        ui_ctrl_reply_set_audio_start_flag(true);
    }
    // Clearing resources
    // result->delete(result);
    // free(text);
    return ESP_OK;
}

/* play audio function */

static void audio_play_finish_cb(void)
{
    ESP_LOGI(TAG, "replay audio end");
    if (ui_ctrl_reply_get_audio_start_flag())
    {
        ui_ctrl_reply_set_audio_end_flag(true);
    }
}

void app_main()
{
    // Initialize NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    ESP_ERROR_CHECK(settings_read_parameter_from_nvs());
    sys_param = settings_get_parameter();

    bsp_spiffs_mount();
    bsp_i2c_init();
    bsp_display_start();
    bsp_board_init();

    ESP_LOGI(TAG, "Display LVGL demo");
    bsp_display_backlight_on();
    ui_ctrl_init();
    app_network_start();

    ESP_LOGI(TAG, "speech recognition start");
    app_sr_start(false);
    audio_register_play_finish_cb(audio_play_finish_cb);

    while (true)
    {
        ESP_LOGD(TAG, "\tDescription\tInternal\tSPIRAM");
        ESP_LOGD(TAG, "Current Free Memory\t%d\t\t%d",
                 heap_caps_get_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
                 heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
        ESP_LOGD(TAG, "Min. Ever Free Size\t%d\t\t%d",
                 heap_caps_get_minimum_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
                 heap_caps_get_minimum_free_size(MALLOC_CAP_SPIRAM));
        vTaskDelay(pdMS_TO_TICKS(5 * 1000));
    }
}
