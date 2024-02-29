cmake_minimum_required(VERSION 3.10)
# ^ Minimal of version of CMake you need to begin the build

set(CMAKE_C_COMPILER gcc)
# ^ Variable of or path to C compiler
set(CMAKE_CXX_COMPILER g++)
# ^ Variable of or path to C++ compiler
set(CMAKE_CXX_STANDARD 17)

project(OpenGLProject)
# ^ Name of project

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
if(GLUT_FOUND)
  message(STATUS "found glut in ${GLUT_INCLUDE_DIRS}")
else(GLUT_FOUND)
    message(FATAL_ERROR "glut not found")
endif(GLUT_FOUND)
include_directories(
  ${OPENGL_INCLUDE_DIRS}
  ${GLUT_INCLUDE_DIRS}
)

# set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules/cmake/" ${CMAKE_MODULE_PATH})
# set(CMAKE_PREFIX_PATH "/tmp/SFML/build/")
# set(SFML_DIR "/tmp/SFML/build/")
set(SFML_DIR "/tmp/SFML-2.6.1/lib/cmake/SFML/")
find_package(SFML REQUIRED system window graphics network audio)

message(INFO:\ ${OpenGLProject_SOURCE_DIR})
# ^ Log message
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OpenGLProject_SOURCE_DIR}/bin)
# ^ Directory where store build of project

add_executable(OpenGLProjectMain main.cpp) 
# ^ Create executable with sources

target_link_libraries(OpenGLProjectMain ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
# ^ Add compiled libraries (same effect as -l option of g++)
