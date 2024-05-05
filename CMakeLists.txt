# CMake 3.24 is required for CMAKE_PROJECT_TOP_LEVEL_INCLUDES used in CMakeCsoundPlugin.
cmake_minimum_required(VERSION 3.24)

include("cmake/fetch_dependency.cmake")

fetch_dependency(
    NAME CMakeCsoundPlugin
    URL https://github.com/docEdub/CMakeCsoundPlugin/archive/refs/tags/2024.05.05.tar.gz
    URL_MD5 8612d88f97ed40b36eada598e6a893dd
)

project(csound-websocket-io-plugin)

find_package(cglm REQUIRED)

add_csound_plugin(
    TARGET glm
    SOURCES
        "src/_init_.c"
        "src/common.c"
        "src/common.h"
    LIBRARIES
        cglm::cglm
)
