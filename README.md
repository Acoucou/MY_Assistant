# 基于esp32-box实现ChatGPT对话

## 演示

> https://www.bilibili.com/video/BV1tV411R74Q/

## 项目优缺点

> **优点**
>
> * **国内无限制使用**
> * **免费，白嫖**
> * **可允许最多20条（可视情况更改）聊天记忆**
>
> **缺点**
>
> * **响应速度慢**
> * **语音识别准确度限制**
> * **基于ChatGPT3.5，回答问题质量没有ChatGPT4.0的高**

## 移植

> **前提**
>
> * **百度语音识别 ****TOKEN**（可在官网免费申请，180天免费）
> * **ChatGPT 的 ****API_KEY** （合集里的视频有介绍如何免费获取）
>
> **主要API**（main/WebAPI）
>
> * **tts_api.c (text to speech 文字转语音)**
> * **stt_api.c (speech to text 语音转文字)**
> * **chat_api.c （聊天接口）**

## 编译使用

```bash
idf.py build

```

```bash
python -m esptool -p /dev/ttyACM0 --chip esp32s3 -b 460800 --before default_reset --after hard_reset write_flash --flash_mode dio --flash_size 16MB --flash_freq 80m 0x0 build/bootloader/bootloader.bin 0x8000 build/partition_table/partition-table.bin 0xd000 build/ota_data_initial.bin 0x10000 build/chatgpt_demo.bin 0x900000 build/storage.bin 0xb00000 build/srmodels/srmodels.bin 0x700000 factory_nvs/build/factory_nvs.bin

```
