cmake_minimum_required(VERSION 3.8)
project(C_Example)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(C_Example ${SOURCE_FILES})