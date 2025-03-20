cmake_minimum_required(VERSION 3.10)
# ^ Minimal of version of CMake you need to begin the build

set(CMAKE_C_COMPILER gcc)
# ^ Variable of or path to C compiler
set(CMAKE_CXX_COMPILER g++)
# ^ Variable of or path to C++ compiler
project(CustomProject)
# ^ Name of project

add_custom_target(LoadProject
  DEPENDS ${PROJECT_SOURCE_DIR}/cpp-project
  # COMMAND git clone https://github.com/bsamseth/cpp-project.git cpp-project
)

add_custom_command(
  OUTPUT  ${PROJECT_SOURCE_DIR}/cpp-project
  DEPENDS ${PROJECT_SOURCE_DIR}/
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  COMMAND git clone https://github.com/bsamseth/cpp-project.git cpp-project
  COMMENT "Upload ${PROJECT_SOURCE_DIR}/cpp-project"
)

add_custom_target(clean-all
  COMMAND ${CMAKE_COMMAND} -E remove_directory ${PROJECT_SOURCE_DIR}/cpp-project
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  COMMENT "Delete ${PROJECT_BUILD_DIR}/cpp-project"
  VERBATIM
)
