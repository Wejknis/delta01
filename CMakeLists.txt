cmake_minimum_required(VERSION 3.12)
project(delta01 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(delta01
        delta01.c)
target_link_libraries(delta01 m)