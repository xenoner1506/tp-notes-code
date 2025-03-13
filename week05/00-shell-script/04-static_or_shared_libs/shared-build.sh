#!/bin/bash

CFLAGS="-c -fPIC"
LIBNAME=libcalc-shared
LIBDIR=lib
CXX=${CXX:-g++}

${CXX} ${CFLAGS} calc.cpp -o "${LIBDIR}/${LIBNAME}.o"
${CXX} -shared "${LIBDIR}/${LIBNAME}.o" -o "${LIBDIR}/${LIBNAME}.so"
