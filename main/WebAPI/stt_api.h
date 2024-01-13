#pragma once

#include "esp_system.h"

// 百度语音识别接口地址
#define BAIDU_ASR_URL "https://vop.baidu.com/server_api"
#define TOKEN_URL "https://aip.baidubce.com/oauth/2.0/token"
// 百度语音识别的API Key和Secret Key
#define API_KEY "API_KEY"
#define SECRET_KEY "SECRET_KEY"

// 获取令牌
char *getAccessToken();

// 获取语音识别结果
char *baidu_asr(uint8_t *audio_data, int audio_len);


