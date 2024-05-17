include_guard()

include(FetchContent)

macro(fetch_dependency)
    cmake_parse_arguments(ARG "" "NAME;GIT_REPOSITORY;GIT_TAG;URL;URL_MD5" "" ${ARGN})

    message(STATUS "Fetching ${ARG_NAME}")

    if(ARG_GIT_REPOSITORY)
        if(NOT ARG_GIT_TAG)
            message(FATAL_ERROR "GIT_TAG must be provided")
        endif()

        FetchContent_Declare(
            ${ARG_NAME}
            GIT_REPOSITORY ${ARG_GIT_REPOSITORY}
            GIT_TAG ${ARG_GIT_TAG}
        )
    elseif(ARG_URL)
        if(NOT ARG_URL_MD5)
            message(FATAL_ERROR "URL_MD5 must be provided")
        endif()

        FetchContent_Declare(
            ${ARG_NAME}
            URL ${ARG_URL}
            URL_MD5 ${ARG_URL_MD5}
            DOWNLOAD_DIR "${FETCHCONTENT_BASE_DIR}/${ARG_NAME}"
            DOWNLOAD_EXTRACT_TIMESTAMP true
        )
    else()
        message(FATAL_ERROR "Either GIT_REPOSITORY or URL must be provided")
    endif()

    FetchContent_MakeAvailable(${ARG_NAME})

    message(STATUS "Fetching ${ARG_NAME} - done")
endmacro()
