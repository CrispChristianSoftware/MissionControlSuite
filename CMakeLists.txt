
cmake_minimum_required(VERSION 3.20)

project(MissionControl VERSION 0.1.0 LANGUAGES CXX)

#Enable testing
include(CTest)
enable_testing()

add_executable(MissionControl src/main.cpp src/terrain/Map.cpp)

set_property(TARGET MissionControl PROPERTY CXX_STANDARD 20)

# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(MINGW)
    set(CMAKE_EXE_LINKER_FLAGS "-static")
endif()


