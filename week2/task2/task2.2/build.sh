#!/bin/bash

rm -rf bin
rm -rf obj
mkdir -p bin
mkdir -p obj
g++ -c src/task2_2.cpp -o obj/task2_2.o
g++ -c src/main.cpp -o obj/main.o
g++ -o bin/main obj/main.o obj/task2_2.o
