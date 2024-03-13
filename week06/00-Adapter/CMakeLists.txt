cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(SensorProject)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SensorProject_SOURCE_DIR}/bin)

set(SOURCES
    src/adaptee.cpp
    src/adapter.cpp
    src/sensor.cpp
)

include_directories(src/)

add_executable(SensorProject main.cpp ${SOURCES}) 
