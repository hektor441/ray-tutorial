
OUT 	:= bin/out
SOURCE  := src/main.cpp
DEPENDS := $(shell find lib -type f -name *.cpp)

all:
	g++ -o $(OUT) $(SOURCE) $(DEPENDS)
	./$(OUT)
