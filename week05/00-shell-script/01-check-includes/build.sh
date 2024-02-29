#!/bin/bash

CFLAGS="-std=c++11 -Wall -Werror"
PROJECT_NAME=HelloWorldProject
CXX=${CXX:-g++}

if grep -E '^#include.*(vector|algorithm)' main.cpp
then
  echo "Build failed"
  echo "You use forbidden libraries"
  exit 1
fi

${CXX} ${CFLAGS} main.cpp -o ${PROJECT_NAME}
