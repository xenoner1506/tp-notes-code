cmake_minimum_required(VERSION 3.10)
project(ChainOfResponsibility)

set(CMAKE_CXX_FLAGS "-g -O0")
set(CMAKE_C_FLAGS "-g -O0")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    include/
)

set(SOURCES src/IHandler.cpp
    src/BaseHandler.cpp
    src/HandlerLogin.cpp
    src/HandlerPassword.cpp
    src/HandlerAccess.cpp
    src/UserEvent.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${ChainOfResponsibility_SOURCE_DIR}/bin)

add_executable(ChainOfResponsibility main.cpp ${SOURCES})
