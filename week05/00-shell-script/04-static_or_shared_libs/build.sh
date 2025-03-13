#!/bin/bash

BUILDTYPE=$1

# if [[ "$BUILDTYPE" == "static" ]]
# else
#   if [[ "$BUILDTYPE" == "dynamic" ]]
#   else
#     exit 1
#   fi
# fi

CFLAGS="-std=c++11 -Wall -Werror"
PROJECT_NAME=HelloWorldProject
CXX=${CXX:-g++}

${CXX} ${CFLAGS} main.cpp -o ${PROJECT_NAME}
