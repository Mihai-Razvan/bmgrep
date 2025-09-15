cmake_minimum_required(VERSION 3.29)
project(bmgrep C)

set(CMAKE_C_STANDARD 11)

add_executable(bmgrep
        src/main.c
        src/cli.c
        include/options.h
        src/options.c
)

target_include_directories(bmgrep PRIVATE include)