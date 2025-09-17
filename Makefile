CC=gcc
SRC=src/main.c
BUILD_LOCATION=build
EXECUTABLE=main

all:
	mkdir ${BUILD_LOCATION}
	${CC} -o ${BUILD_LOCATION}/${EXECUTABLE} ${SRC}

clean:
	rm -r ${BUILD_LOCATION}

