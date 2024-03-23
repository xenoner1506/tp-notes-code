cmake_minimum_required(VERSION 3.10)
project(Strategy)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
set(FETCHCONTENT_BASE_DIR ${Strategy_SOURCE_DIR}/external)

FetchContent_Declare(
    json_lib
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG        v3.11.0
)
FetchContent_MakeAvailable(json_lib)


include_directories(
    include/
    external/json_lib-src/include/
)

set(SOURCES src/Dumper.cpp
    src/JsonDumper.cpp
    src/TextDumper.cpp
    src/DataSaver.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Strategy_SOURCE_DIR}/bin)

add_executable(Strategy main.cpp ${SOURCES})
target_link_libraries(Strategy nlohmann_json::nlohmann_json)

