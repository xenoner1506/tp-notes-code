cmake_minimum_required(VERSION 3.10)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/../cmake")
project(Test_03)

set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)
find_package(Threads REQUIRED)

include_directories(
    ${GTEST_INCLUDE_DIRS}
    include/
    tests/
)

set(SOURCES src/singleton.cpp)
message(INFO ${GTEST_LIBRARIES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Test_03_SOURCE_DIR}/bin)

add_executable(Test_03 main.cpp ${SOURCES})

add_executable(Test_03_mock tests/main.cpp tests/MockSingleton.cpp ${SOURCES})
target_link_libraries(Test_03_mock ${GTEST_LIBRARIES} ${GMOCK_BOTH_LIBRARIES} Threads::Threads)
