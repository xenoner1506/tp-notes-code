# Static and Shared Libraries in C++

Want to make your c++ code modular? 
Then Just create a library

## What is a static library

**Static Linking and Static Libraries** is the result of the linker making copy of all used library functions to the executable file. Static Linking creates larger binary files, and need more space on disk and main memory. Examples of static libraries (libraries which are statically linked) are, **_.a_** files in Linux and **_.lib_** files in Windows.

## What is a shared library

**Shared libraries** are **.so** (or in Windows **.dll**, or in OS X **.dylib**) files.  
These are linked dynamically simply including the address of the library (whereas static linking is a waste of space). Dynamic linking links the libraries at the run-time. Thus, all the functions are in a special place in memory space, and every program can access them, without having multiple copies of them.

## Here are the quick steps to create a static or shared libraries using g++

Create header file with declaration  [calc.hpp](https://github.com/KaranGoel59/StaticAndShared/blob/master/calc.hpp)
Create Cpp file with code  [calc.cpp](https://github.com/KaranGoel59/StaticAndShared/blob/master/calc.cpp)
Create a test program to use that code [main.cpp](https://github.com/KaranGoel59/StaticAndShared/blob/master/calc.cpp)

Compile the cpp
```
g++ -c calc.cpp main.cpp
```
Create executable normally
``` 
g++ -o program main.o calc.o -lm
```

## Creating a static library

Create a static library libcalc
```
ar crv libcalc.a calc.o
```
Create executabe with static library
```
g++ -o program main.o libcalc.a -lm
```
or
```
g++ -o program main.o -L. -lcalc -lm
```

## Creating a shared library

Creating a shared library libcalc
```
g++ -shared -fPIC -o libcalc.so calc.o
```
Create executabe with shared library
```
g++ program main.o libcalc.so -lm
```

## Some useful commands

**ar** : creates static libraries
**ldd** : lists the shared libraries on which the object binary is dependent
**nm** : lists the symbols defined in the symbol table of an object file or a static library
**objdump** : to display all the information in an object binary file 
**strings** : list all the printable strings in a binary file
**strip** : discards all symbols from object files
 **c++filt** : demangle low-level names into user-level names


## Refrence

[https://www.bogotobogo.com/cplusplus/libraries.php](https://www.bogotobogo.com/cplusplus/libraries.php)

