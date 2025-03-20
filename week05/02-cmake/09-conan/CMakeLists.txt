cmake_minimum_required (VERSION 3.28)
project(TestConan CXX)

set(CMAKE_CXX_STANDARD 17)
find_package(SQLite3 REQUIRED)

add_executable(testConan main.cpp)
target_link_libraries(testConan SQLite::SQLite3)
