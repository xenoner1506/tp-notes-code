cmake_minimum_required(VERSION 3.10)
project(Test_02)

set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(
    ${GTEST_INCLUDE_DIRS}
    include/
)

set(SOURCES src/adaptee.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Test_02_SOURCE_DIR}/bin)

add_executable(Test_02 main.cpp ${SOURCES})

add_executable(Test_02_fixture tests/TestWithFixtures.cpp ${SOURCES})
target_link_libraries(Test_02_fixture ${GTEST_BOTH_LIBRARIES} Threads::Threads)
