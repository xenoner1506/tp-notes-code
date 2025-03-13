cmake_minimum_required(VERSION 3.10)
# ^ Minimal of version of CMake you need to begin the build

set(CMAKE_C_COMPILER gcc)
# ^ Variable of or path to C compiler
set(CMAKE_CXX_COMPILER g++)
# ^ Variable of or path to C++ compiler
project(BuilderProject)
# ^ Name of project

message(INFO:\ ${BuilderProject_SOURCE_DIR})
# ^ Log message
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BuilderProject_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BuilderProject_SOURCE_DIR}/lib)
# ^ Directory where store build of project

add_subdirectory(pattern)
# ^ Add subdirectory with CMakeLists.txt


set(SOURCES
  ${PATTERN_SOURCES}
)
# ^ Add variable SOURCES that uses PATTERN_SOURCES from "pattern/CMakeLists.txt"
message(SOURCES:\ ${SOURCES})
# ^ Log message

include_directories(
  pattern/builder/
  pattern/character/
  pattern/director/
)
# ^ Dircerories to be  searched for headers

add_library(BuilderPattern SHARED ${SOURCES})

add_executable(BuilderProject main.cpp ${SOURCES}) 
# ^ Create executable with sources
