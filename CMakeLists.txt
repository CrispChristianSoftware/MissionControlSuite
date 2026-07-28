

cmake_minimum_required(VERSION 3.20)

project(MissionControl VERSION 0.1.0 LANGUAGES CXX)

#Enable testing
include(CTest)
enable_testing()

add_executable(MissionControl src/main.cpp)

set_property(TARGET MissionControl PROPERTY CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if(MSVC)
    target_compile_options(MissionControl PRIVATE /W4)
else()
    target_compile_options(MissionControl PRIVATE -Wall -Wextra -Wpedantic)
endif()


