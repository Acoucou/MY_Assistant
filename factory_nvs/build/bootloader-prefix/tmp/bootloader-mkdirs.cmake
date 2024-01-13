# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "F:/Espressif/frameworks/esp-idf-v5.1.2/components/bootloader/subproject"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/tmp"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/src/bootloader-stamp"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/src"
  "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/temp/esp-box/examples/chatgpt_demo/factory_nvs/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
