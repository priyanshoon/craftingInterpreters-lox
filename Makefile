MAIN=main.c
BUILD_LOCATION=build
EXECUTABLE=main

all:
	mkdir ${BUILD_LOCATION}
	gcc -o ${BUILD_LOCATION}/${EXECUTABLE} ${MAIN}

clean:
	rm -r ${BUILD_LOCATION}

