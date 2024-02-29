#!/bin/bash

CFLAGS="-std=c++11 -Wall -Werror"

SOURCE_DIR=src
BUILD_DIR=build
CXX=${CXX:-g++}

mkdir -p ${BUILD_DIR}
${CXX} ${CFLAGS} -o ${BUILD_DIR}/Singleton.o -c ${SOURCE_DIR}/singleton.cpp -I include
${CXX} ${CFLAGS} -o ${BUILD_DIR}/main.o -c main.cpp
${CXX} ${CFLAGS} -o project ${BUILD_DIR}/main.o ${BUILD_DIR}/Singleton.o
