#!/bin/sh

make clean
make
./build/main interpreter.fun

make clean
