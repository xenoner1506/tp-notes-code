cmake_minimum_required(VERSION 3.10)
project(Test_00)

set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.15.0
)
FetchContent_MakeAvailable(googletest)

find_package(Threads REQUIRED)

# include_directories(${GTEST_INCLUDE_DIRS})
message(INFO ${GTest_FOUND})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Test_00_SOURCE_DIR}/bin)

add_executable(Test_00_base main.cpp)
target_link_libraries(Test_00_base gtest gtest_main Threads::Threads)
