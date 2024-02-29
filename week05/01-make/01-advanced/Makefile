CFLAGS=-Isrc/ -std=c++17

.PHONY: all create_dir clean

all: create_dir PrototypeProject

PrototypeProject: build/main.o build/enemy.o build/spawner.o
	g++ ${CFLAGS} $? -o $@

build/main.o: main.cpp
	g++ ${CFLAGS} -c $? -o $@
	
build/enemy.o: src/enemy.cpp
	g++ ${CFLAGS} -c $? -o $@

build/spawner.o: src/spawner.cpp
	g++ ${CFLAGS} -c $? -o $@

create_dir:
	mkdir -p build

clean:
	rm -rf build PrototypeProject
