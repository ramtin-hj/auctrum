cmake_minimum_required(VERSION 3.24)

project(auctrum
        VERSION 1.0
        LANGUAGES C
)

find_package(SDL3 CONFIG)
find_package(SDL3_ttf CONFIG)
find_package(SndFile CONFIG)
find_package(kissfft CONFIG)

file(GLOB_RECURSE SOURCES
        CONFIGURE_DEPENDS
        src/*.c
)

add_executable(ac ${SOURCES})

if(CMAKE_BUILD_TYPE STREQUAL "Release")
        target_compile_options(ac PRIVATE
                -Wall
                -Wextra
                -Wpedantic
                -Wconversion
                -Wsign-conversion
                -Wmaybe-uninitialized
        )
        target_link_libraries(ac PRIVATE
                SDL3::SDL3
                SDL3_ttf::SDL3_ttf
                sndfile
                kissfft-float
                m
        )
elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
        target_compile_options(ac PRIVATE
                -Wall
                -Wextra
                -Wpedantic
                -Wconversion
                -Wsign-conversion
                -Wmaybe-uninitialized
                -fsanitize=address
        )
        target_link_libraries(ac PRIVATE
                SDL3::SDL3
                SDL3_ttf::SDL3_ttf
                sndfile
                kissfft-float
                m
                -fsanitize=address
        )
endif()
