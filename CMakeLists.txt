# CMake 3.24 is required for CMAKE_PROJECT_TOP_LEVEL_INCLUDES used in CMakeCsoundPlugin.
cmake_minimum_required(VERSION 3.24)

include("cmake/fetch_dependency.cmake")

fetch_dependency(
    NAME CMakeCsoundPlugin
    # URL https://github.com/docEdub/CMakeCsoundPlugin/archive/refs/tags/2024.05.05.tar.gz
    # URL_MD5 8612d88f97ed40b36eada598e6a893dd
    GIT_REPOSITORY git@github.com:docEdub/CMakeCsoundPlugin.git
    GIT_TAG 9fd337b2fef576194149d3af174a0f75309a60c5
)

project(csound-da-gl-math-plugin)

set(CMAKE_CXX_STANDARD 11)

find_package(glm REQUIRED)

add_csound_plugin(
    TARGET DaGLMath
    SOURCES
        "src/_init_.c"
        "src/common.c"
        "src/common.h"
        "src/mat4.cpp"
        "src/mat4.h"
    LIBRARIES
        glm::glm-header-only
    TEST_ORCS
        "test/test.orc"
)
