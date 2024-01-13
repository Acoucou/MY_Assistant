set(UI_DIR ./ui)
file(GLOB_RECURSE UI_SRCS ${UI_DIR}/*.c)

set(APP_DIR ./app)
file(GLOB_RECURSE APP_SRCS ${APP_DIR}/*.c)

set(WEBAPI_DIR ./WebAPI)
file(GLOB_RECURSE WEBAPI_SRCS ${WEBAPI_DIR}/*.c)

set(SETTINGS_DIR ./settings)
file(GLOB_RECURSE SETTINGS_SRCS ${SETTINGS_DIR}/*.c)

idf_component_register(
    SRCS
        "main.c"
        ${WEBAPI_SRCS}
        ${UI_SRCS}
        ${APP_SRCS}
        ${SETTINGS_SRCS}
    INCLUDE_DIRS
        "."
        ${WEBAPI_DIR}
        ${UI_DIR}
        ${APP_DIR}
        ${SETTINGS_DIR}
)
spiffs_create_partition_image(storage ../spiffs FLASH_IN_PROJECT)
