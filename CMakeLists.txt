cmake_minimum_required(VERSION 3.7)
project(algorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c List.c List.h)
add_executable(algorithm ${SOURCE_FILES})