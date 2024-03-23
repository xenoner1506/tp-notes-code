cmake_minimum_required(VERSION 3.10)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
project(simpleTests)

set(CXX g++)
set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)
enable_testing()

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)
find_package(Threads REQUIRED)

add_subdirectory(00-base)
add_subdirectory(01-base_plus)
add_subdirectory(02-advanced)
add_subdirectory(03-mock)


add_test(Test_00_base ${simpleTests_SOURCE_DIR}/00-base/bin/Test_00_base)
add_test(Test_01_base ${simpleTests_SOURCE_DIR}/01-base_plus/bin/Test_01_base)
add_test(Test_02_fixture ${simpleTests_SOURCE_DIR}/02-advanced/bin/Test_02_fixture)
add_test(Test_03_mock ${simpleTests_SOURCE_DIR}/03-mock/bin/Test_03_mock)
