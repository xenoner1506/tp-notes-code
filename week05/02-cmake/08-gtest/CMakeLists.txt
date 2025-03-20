cmake_minimum_required(VERSION 3.10)
project(Test)

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


execute_process(COMMAND cmake -S. -B${googletest_BINARY_DIR} WORKING_DIRECTORY ${googletest_SOURCE_DIR})
execute_process(COMMAND cmake --build . WORKING_DIRECTORY ${googletest_BINARY_DIR})

set(GTEST_LIBRARY ${googletest_BINARY_DIR}/lib/libgtest.a)
set(GTEST_INCLUDE_DIR ${googletest_SOURCE_DIR}/googletest/include)
# set(GTEST_MAIN_LIBRARY ${googletest_BINARY_DIR}/lib/libgtest_main.a)

include_directories(
    ${GTEST_INCLUDE_DIR}
    include/
)

set(SOURCES src/adaptee.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Test_SOURCE_DIR}/bin)

add_executable(Test main.cpp ${SOURCES})

add_executable(Test_fixture tests/main.cpp tests/TestWithFixtures.cpp ${SOURCES})
target_link_libraries(Test_fixture ${GTEST_LIBRARY} Threads::Threads)

