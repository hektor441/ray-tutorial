
OUT := bin/out

SOURCES := src/main.cpp
DEPENDS := $(shell find lib -type f -name *.cpp)

all:
	g++ -o $(OUT) $(SOURCES) $(DEPENDS)
	./$(OUT)
