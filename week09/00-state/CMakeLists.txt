cmake_minimum_required(VERSION 3.10)
project(State)

set(CMAKE_CXX_FLAGS "-g -O0")
set(CMAKE_C_FLAGS "-g -O0")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    include/
)

set(SOURCES src/BookingContext.cpp
    src/states/BookedState.cpp
    src/states/BookingState.cpp
    src/states/NewState.cpp
    src/states/PendingState.cpp
    src/states/ClosedState.cpp
    src/CancellationTokenSource.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${State_SOURCE_DIR}/bin)

add_executable(State main.cpp ${SOURCES})
