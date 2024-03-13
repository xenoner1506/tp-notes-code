cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 17)

project(OpenGLProject)

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

set(SFML_DIR "/tmp/SFML-2.6.1/lib/cmake/SFML/")
find_package(SFML 2.6.2 REQUIRED system window graphics network audio)

message(INFO:\ ${OpenGLProject_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OpenGLProject_SOURCE_DIR}/bin)

add_executable(OpenGLProjectMain main.cpp) 

target_link_libraries(OpenGLProjectMain ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
