cmake_minimum_required(VERSION 3.10)
project(Test_01)

set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS} src/)
message(STATUS "GTEST_FOUND='${GTEST_FOUND}'")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Test_01_SOURCE_DIR}/bin)

add_executable(Test_01_base main.cpp src/MyArray.cpp)
target_link_libraries(Test_01_base gtest gtest_main Threads::Threads)
