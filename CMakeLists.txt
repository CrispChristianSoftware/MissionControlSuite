

cmake_minimum_required(VERSION 3.20)

project(
    MissionControlSuite
    VERSION 0.1.0
    LANGUAGES CXX 
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra Wpedantic)
endif()

add_executable(
    mission_control
    src/main.cpp
)

enable_testing()