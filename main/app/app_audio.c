/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "freertos/task.h"
#include "esp_task_wdt.h"
#include "esp_check.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_check.h"
#include "esp_timer.h"
#include "esp_spiffs.h"
#include "esp_vfs.h"
#include "app_sr.h"
#include "app_audio.h"
#include "bsp_board.h"
#include "bsp/esp-bsp.h"
#include "audio_player.h"
#include "file_iterator.h"
#include "app_ui_ctrl.h"
#include "tts_api.h"
#include "app_wifi.h"

static const char *TAG = "app_audio";

#if CONFIG_BSP_BOARD_ESP32_S3_BOX
static bool mute_flag = true;
#endif
bool record_flag = false;
uint32_t record_total_len = 0;
uint32_t file_total_len = 0;
static uint8_t *record_audio_buffer = NULL;
uint8_t *audio_rx_buffer = NULL;
audio_play_finish_cb_t audio_play_finish_cb = NULL;

extern sr_data_t *g_sr_data;
extern esp_err_t start_openai(uint8_t *audio, int audio_len);
extern int Cache_WriteBack_Addr(uint32_t addr, uint32_t size);

/* main function */
void mute_btn_handler(void *handle, void *arg)
{
#if CONFIG_BSP_BOARD_ESP32_S3_BOX
    button_event_t event = (button_event_t)arg;

    if (BUTTON_PRESS_DOWN == event) {
        esp_rom_printf(DRAM_STR("Audio Mute On\r\n"));
        mute_flag = true;
    } else {
        esp_rom_printf(DRAM_STR("Audio Mute Off\r\n"));
        mute_flag = false;
    }
#endif
}

static esp_err_t audio_mute_function(AUDIO_PLAYER_MUTE_SETTING setting)
{
    bsp_codec_config_t *codec_handle = bsp_board_get_codec_handle();

    codec_handle->mute_set_fn(setting == AUDIO_PLAYER_MUTE ? true : false);
    // restore the voice volume upon unmuting
    if (setting == AUDIO_PLAYER_UNMUTE) {
        codec_handle->volume_set_fn(CONFIG_VOLUME_LEVEL, NULL);
    } else {
        if (audio_play_finish_cb) {
            audio_play_finish_cb();
        }
    }
    return ESP_OK;
}

void audio_record_init()
{
    /* Create file if record to SD card enabled*/
#if DEBUG_SAVE_PCM
    record_audio_buffer = heap_caps_calloc(1, FILE_SIZE, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);
    assert(record_audio_buffer);
    printf("successfully created record_audio_buffer with a size: %zu\n", FILE_SIZE);
    audio_rx_buffer = heap_caps_calloc(1, MAX_FILE_SIZE, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);
    assert(audio_rx_buffer);
    printf("audio_rx_buffer with a size: %zu\n", MAX_FILE_SIZE);
#endif

    if (record_audio_buffer == NULL || audio_rx_buffer == NULL)
    {
        printf("Error: Failed to allocate memory for buffers\n");
        return; // Return or handle the error condition appropriately
    }

    file_iterator_instance_t *file_iterator = file_iterator_new(BSP_SPIFFS_MOUNT_POINT);
    assert(file_iterator != NULL);

    bsp_codec_config_t *codec_handle = bsp_board_get_codec_handle();
    audio_player_config_t config = { .mute_fn = audio_mute_function,
                                     .write_fn = codec_handle->i2s_write_fn,
                                     .clk_set_fn = codec_handle->i2s_reconfig_clk_fn,
                                     .priority = 5
                                   };
    ESP_ERROR_CHECK(audio_player_new(config));
}

void audio_record_save(int16_t *audio_buffer, int audio_chunksize)
{
#if DEBUG_SAVE_PCM
    if (record_flag) {
        uint16_t *record_buff = (uint16_t *)(record_audio_buffer + sizeof(wav_header_t));
        record_buff += record_total_len;
        for (int i = 0; i < (audio_chunksize - 1); i++) {
            if (record_total_len < (MAX_FILE_SIZE - sizeof(wav_header_t)) / 2) {
#if PCM_ONE_CHANNEL
                record_buff[ i * 1 + 0] = audio_buffer[i * 3 + 0];
                record_total_len += 1;
#else
                record_buff[ i * 2 + 0] = audio_buffer[i * 3 + 0];
                record_buff[ i * 2 + 1] = audio_buffer[i * 3 + 1];
                record_total_len += 2;
#endif
            }
        }
    }
#endif
}

void audio_register_play_finish_cb(audio_play_finish_cb_t cb)
{
    audio_play_finish_cb = cb;
}

static void audio_record_start()
{
#if DEBUG_SAVE_PCM
    ESP_LOGI(TAG, "### record Start");
    audio_player_stop();

    record_flag = true;
    record_total_len = 0;
    file_total_len = sizeof(wav_header_t);
#endif
}

static esp_err_t audio_record_stop()
{
    esp_err_t ret = ESP_OK;
#if DEBUG_SAVE_PCM
    record_flag = false;
#if PCM_ONE_CHANNEL
    record_total_len *= 1;
#else
    record_total_len *= 2;
#endif
    file_total_len += record_total_len;
    ESP_LOGI(TAG, "### record Stop, %" PRIu32 " %" PRIu32 "K", \
         record_total_len, \
         record_total_len / 1024);

    FILE *fp = fopen("/spiffs/echo_en_wake.wav", "r");
    ESP_GOTO_ON_FALSE(NULL != fp, ESP_FAIL, err, TAG, "Failed create record file");

    wav_header_t wav_head;
    int len = fread(&wav_head, 1, sizeof(wav_header_t), fp);
    ESP_GOTO_ON_FALSE(len > 0, ESP_FAIL, err, TAG, "Failed create record file");

    wav_head.SampleRate = 16000;
#if PCM_ONE_CHANNEL
    wav_head.NumChannels = 1;
#else
    wav_head.NumChannels = 2;
#endif
    wav_head.BitsPerSample = 16;
    wav_head.ChunkSize = file_total_len - 8;
    wav_head.ByteRate = wav_head.SampleRate * wav_head.BitsPerSample * wav_head.NumChannels / 8;
    wav_head.Subchunk2ID[0] = 'd';
    wav_head.Subchunk2ID[1] = 'a';
    wav_head.Subchunk2ID[2] = 't';
    wav_head.Subchunk2ID[3] = 'a';
    wav_head.Subchunk2Size = record_total_len;
    memcpy((void *)record_audio_buffer, &wav_head, sizeof(wav_header_t));
    Cache_WriteBack_Addr((uint32_t)record_audio_buffer, record_total_len);
    // audio_player_play(record_audio_buffer, file_total_len);

#endif
err:
    if (fp) {
        fclose(fp);
    }
    return ret;
}

esp_err_t audio_play_task(void *filepath)
{
    FILE *fp = NULL;
    struct stat file_stat;
    esp_err_t ret = ESP_OK;

    const size_t chunk_size = 4096;
    uint8_t *buffer = malloc(chunk_size);
    ESP_GOTO_ON_FALSE(NULL != buffer, ESP_FAIL, EXIT, TAG, "buffer malloc failed");

    ESP_GOTO_ON_FALSE(-1 != stat(filepath, &file_stat), ESP_FAIL, EXIT, TAG, "Failed to stat file");

    fp = fopen(filepath, "r");
    ESP_GOTO_ON_FALSE(NULL != fp, ESP_FAIL, EXIT, TAG, "Failed create record file");

    wav_header_t wav_head;
    int len = fread(&wav_head, 1, sizeof(wav_header_t), fp);
    ESP_GOTO_ON_FALSE(len > 0, ESP_FAIL, EXIT, TAG, "Read wav header failed");

    if (NULL == strstr((char *)wav_head.Subchunk1ID, "fmt") &&
            NULL == strstr((char *)wav_head.Subchunk2ID, "data")) {
        ESP_LOGI(TAG, "PCM format");
        fseek(fp, 0, SEEK_SET);
        wav_head.SampleRate = 16000;
        wav_head.NumChannels = 2;
        wav_head.BitsPerSample = 16;
    }

    bsp_codec_config_t *codec_handle = bsp_board_get_codec_handle();

    ESP_LOGI(TAG, "frame_rate= %" PRIi32 ", ch=%d, width=%d", wav_head.SampleRate, wav_head.NumChannels, wav_head.BitsPerSample);
    codec_handle->i2s_reconfig_clk_fn(wav_head.SampleRate, wav_head.BitsPerSample, I2S_SLOT_MODE_STEREO);

    codec_handle->mute_set_fn(false);
    codec_handle->volume_set_fn(CONFIG_VOLUME_LEVEL,NULL);
    vTaskDelay(pdMS_TO_TICKS(500));

    size_t cnt, total_cnt = 0;
    do {
        /* Read file in chunks into the scratch buffer */
        len = fread(buffer, 1, chunk_size, fp);
        if (len <= 0) {
            break;
        } else if (len > 0) {
            codec_handle->i2s_write_fn(buffer, len, &cnt, portMAX_DELAY);
            total_cnt += cnt;
        }
    } while (1);
    printf("audio play end, %d, %d K\r\n", total_cnt, total_cnt / 1024);

EXIT:
    if (fp) {
        fclose(fp);
    }
    if (buffer) {
        free(buffer);
    }
    return ret;
}

esp_err_t audio_mp3_load(void *filepath, size_t *file_len)
{
    FILE *fp = NULL;
    struct stat file_stat;
    esp_err_t ret = ESP_OK;

    size_t len, total_cnt = 0;

    const size_t chunk_size = 4096;
    uint8_t *buffer = malloc(chunk_size);
    ESP_GOTO_ON_FALSE(NULL != buffer, ESP_FAIL, EXIT, TAG, "buffer malloc failed");

    ESP_GOTO_ON_FALSE(-1 != stat(filepath, &file_stat), ESP_FAIL, EXIT, TAG, "Failed to stat file");

    fp = fopen(filepath, "r");
    ESP_GOTO_ON_FALSE(NULL != fp, ESP_FAIL, EXIT, TAG, "Failed create record file");

    do {
        /* Read file in chunks into the scratch buffer */
        len = fread(buffer, 1, chunk_size, fp);
        if (len <= 0) {
            break;
        } else if (len > 0) {
            memcpy((void *)(audio_rx_buffer + total_cnt), buffer, len);
            total_cnt += len;
        }
    } while (1);
    printf("audio load end, %d, %d K\r\n", total_cnt, total_cnt / 1024);

EXIT:
    if (fp) {
        fclose(fp);
    }
    if (buffer) {
        free(buffer);
    }
    *file_len = total_cnt;
    return ret;
}

void sr_handler_task(void *pvParam)
{
    static bool mute_state = false;

#if CONFIG_BSP_BOARD_ESP32_S3_BOX
    mute_flag = bsp_button_get(BSP_BUTTON_MUTE);
    printf("sr handle task, mute:%d\n", mute_flag);
#endif

    while (true) {
        if (NEED_DELETE && xEventGroupGetBits(g_sr_data->event_group)) {
            xEventGroupSetBits(g_sr_data->event_group, HANDLE_DELETED);
            vTaskDelete(NULL);
        }

        sr_result_t result = {
            .wakenet_mode = WAKENET_NO_DETECT,
            .state = ESP_MN_STATE_DETECTING,
        };

        app_sr_get_result(&result, pdMS_TO_TICKS(1 * 1000));

#if CONFIG_BSP_BOARD_ESP32_S3_BOX
        if (mute_state != mute_flag) {
            mute_state = mute_flag;
            if (false == mute_state) {
                ESP_LOGI(TAG, "reset CODEC");
                bsp_codec_config_t *bsp_codec_config = bsp_board_get_codec_handle();
                bsp_codec_config->codec_reconfig_fn();
            }
        }
#endif
        if (ESP_MN_STATE_TIMEOUT == result.state) {
            ESP_LOGI(TAG, "ESP_MN_STATE_TIMEOUT");
            audio_record_stop();
            // audio_play_task("/spiffs/echo_en_wake.wav");
            size_t len;
            audio_mp3_load("/spiffs/waitPlease_cn.mp3", &len);
            if (len) {
                audio_player_play(audio_rx_buffer, len);
            }
            uint32_t starttime = esp_log_timestamp();
            ESP_LOGE(TAG, "[Start] start_openai, timestamp: %" PRIu32, starttime);
            if (WIFI_STATUS_CONNECTED_OK == wifi_connected_already()) {
                start_openai((uint8_t *)record_audio_buffer, record_total_len);
            }
            ESP_LOGE(TAG, "[End] start_openai, +offset:%" PRIu32, esp_log_timestamp() - starttime);
            continue;
        }

        if (WAKENET_DETECTED == result.wakenet_mode) {
            audio_record_start();

            // UI show listen
            ui_ctrl_guide_jump();
            ui_ctrl_show_panel(UI_CTRL_PANEL_LISTEN, 0);

            audio_play_task("/spiffs/echo_en_wake.wav");
            continue;
        }

        if (ESP_MN_STATE_DETECTED & result.state) {
            ESP_LOGI(TAG, "STOP:%d", result.command_id);
            audio_record_stop();
            audio_play_task("/spiffs/echo_en_ok.wav");
            //How to stop the transmission, when start_openai begins.
            continue;
        }
    }
    vTaskDelete(NULL);
}
