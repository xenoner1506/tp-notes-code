#!/bin/bash

CFLAGS="-c"
LIBNAME=libcalc-static
LIBDIR=lib
CXX=${CXX:-g++}

${CXX} ${CFLAGS} calc.cpp -o "${LIBDIR}/${LIBNAME}.o"
ar rcs "${LIBDIR}/${LIBNAME}.a" "${LIBDIR}/${LIBNAME}.o"
