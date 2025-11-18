cmake_minimum_required(VERSION 3.16)

set(ENV{IDF_PATH} "/Users/joshtaylor/GitHub/esp-idf")
set(CMAKE_TOOLCHAIN_FILE "$ENV{IDF_PATH}/tools/cmake/toolchain-esp32.cmake")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(air_quality_sensor)
