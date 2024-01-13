#include "stt_api.h"

#include "esp_log.h"
#include "esp_crt_bundle.h"
#include "esp_http_client.h"
#include "cJSON.h"

static char *TAG = "stt_api";

char token[] = "YOUR_TOKEN";

static char response_data[2048];
static int recived_len;

// http客户端的事件处理回调函数
static esp_err_t http_client_event_handler(esp_http_client_event_t *evt)
{
    switch (evt->event_id)
    {
    case HTTP_EVENT_ON_CONNECTED:
        ESP_LOGI(TAG, "connected to web-server");
        recived_len = 0;
        break;
    case HTTP_EVENT_ON_DATA:
        if (evt->user_data)
        {
            memcpy(evt->user_data + recived_len, evt->data, evt->data_len); // 将分片的每一片数据都复制到user_data
            recived_len += evt->data_len;                                   // 累计偏移更新
        }
        break;
    case HTTP_EVENT_ON_FINISH:
        ESP_LOGI(TAG, "finished a request and response!");
        recived_len = 0;
        break;
    case HTTP_EVENT_DISCONNECTED:
        ESP_LOGI(TAG, "disconnected to web-server");
        recived_len = 0;
        break;
    case HTTP_EVENT_ERROR:
        ESP_LOGE(TAG, "error");
        recived_len = 0;
        break;
    default:
        break;
    }

    return ESP_OK;
}

// 获取百度语音识别的访问令牌
char *getAccessToken()
{
    char *access_token = NULL;

    esp_http_client_config_t config = {
        .url = "https://aip.baidubce.com/oauth/2.0/token",
        .event_handler = NULL,
        .crt_bundle_attach = esp_crt_bundle_attach};
    esp_http_client_handle_t client = esp_http_client_init(&config);

    // 构建请求参数
    char request_params[200];
    snprintf(request_params, sizeof(request_params),
             "grant_type=client_credentials&client_id=%s&client_secret=%s",
             API_KEY, SECRET_KEY);

    esp_http_client_set_method(client, HTTP_METHOD_POST);
    esp_http_client_set_header(client, "Content-Type", "application/x-www-form-urlencoded");
    esp_http_client_set_post_field(client, request_params, strlen(request_params));

    esp_err_t err = esp_http_client_perform(client);
    if (err == ESP_OK)
    {
        int content_length = esp_http_client_get_content_length(client);
        char *response_buf = malloc(content_length + 1);
        int read_len = esp_http_client_read(client, response_buf, content_length);
        response_buf[read_len] = '\0';

        cJSON *json = cJSON_Parse(response_buf);
        if (json != NULL)
        {
            cJSON *access_token_json = cJSON_GetObjectItem(json, "access_token");
            if (access_token_json != NULL)
            {
                access_token = strdup(access_token_json->valuestring);
            }
            cJSON_Delete(json);
        }

        free(response_buf);
    }

    esp_http_client_cleanup(client);
    return access_token;
}

char *baidu_asr(uint8_t *audio_data, int audio_len)
{
    char *asr_data = NULL;
    char url[256]; // Define a buffer to hold the URL

    // Define the parameters
    char dev_pid[] = "1537";   // 普通话识别
    char cuid[] = "123456PHP";  // ID

    // Construct the URL dynamically
    sprintf(url, "http://vop.baidu.com/server_api?dev_pid=%s&cuid=%s&token=%s", dev_pid, cuid, token);

    esp_http_client_config_t config = {
        .url = url,
        .event_handler = http_client_event_handler,
        .user_data = response_data};
    esp_http_client_handle_t client = esp_http_client_init(&config);

    esp_http_client_set_method(client, HTTP_METHOD_POST);
    esp_http_client_set_post_field(client, (const char *)audio_data, audio_len);
    esp_http_client_set_header(client, "Content-Type", "audio/wav;rate=16000");
    esp_err_t err = esp_http_client_perform(client);
    if (err == ESP_OK)
    {
        cJSON *json = cJSON_Parse(response_data);

        if (json != NULL)
        {
            cJSON *result_json = cJSON_GetObjectItem(json, "result");
            if (result_json != NULL && cJSON_IsArray(result_json))
            {
                cJSON *result_array = cJSON_GetArrayItem(result_json, 0);
                if (result_array != NULL && cJSON_IsString(result_array))
                {
                    asr_data = strdup(result_array->valuestring);
                }
            }
            cJSON_Delete(json);
        }

        ESP_LOGE(TAG, "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~result_data: %s\n", asr_data);
    }
    else
    {
        ESP_LOGE(TAG, "HTTP POST request failed: %s", esp_err_to_name(err));
    }
    esp_http_client_cleanup(client);

    return asr_data;
}
