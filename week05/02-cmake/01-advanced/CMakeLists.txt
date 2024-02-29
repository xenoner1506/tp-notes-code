cmake_minimum_required(VERSION 3.10)
# ^ Minimal of version of CMake you need to begin the build

set(CMAKE_C_COMPILER gcc)
# ^ Variable of or path to C compiler
set(CMAKE_CXX_COMPILER g++)
# ^ Variable of or path to C++ compiler
project(SingletonProject)
# ^ Name of project

message(INFO:\ ${SingletonProject_SOURCE_DIR})
# ^ Log message
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SingletonProject_SOURCE_DIR}/bin)
# ^ Directory where store build of project

include_directories(include/)
# ^ Directory with headers to be included (like -I option of compilator)

add_executable(SingletonProject main.cpp src/singleton.cpp) 
# ^ Create executable with sources
