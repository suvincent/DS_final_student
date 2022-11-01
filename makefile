#!/bin/bash

# specify the case you want to test here!
case=case3

# Build and run your final project!
NTHU_bike:
	g++ -g -std=c++11 -o ./bin/main ./src/*.cpp
	./bin/main $(case)

# Check your execution result is valid or not!
CheckValid:
	./bin/verifier $(case)