cmake_minimum_required(VERSION 3.10)
# ^ Minimal of version of CMake you need to begin the build

set(CMAKE_C_COMPILER gcc)
# ^ Variable of or path to C compiler
set(CMAKE_CXX_COMPILER g++)
# ^ Variable of or path to C++ compiler
project(BuilderProject)
# ^ Name of project

option(DEBUG1 "Run build with extra debug flags" OFF)
option(DEBUG2 "Run build with extra output to std::cerr" OFF)

if(DEBUG1)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g3 -Wall -Werror -fsanitize=address")
endif(DEBUG1)

if(DEBUG2)
  add_compile_options(-DDEBUG)
  # add_definitions(-DDEBUG)  # Alternative
endif(DEBUG2)

message(INFO:\ ${BuilderProject_SOURCE_DIR})
# ^ Log message
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BuilderProject_SOURCE_DIR}/bin)
# ^ Directory where store build of project

include_directories(include/)
# ^ Directory with headers to be included (like -I option of compilator)

add_executable(BuilderProject main.cpp src/builder.cpp src/character.cpp src/director.cpp) 
# ^ Create executable with sources
