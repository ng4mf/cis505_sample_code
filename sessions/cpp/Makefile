# The Makefile is based on the explanation of Makefiles that is found here:
# http://nuclear.mutantstargoat.com/articles/make/

CXX = g++
CXXFLAGS = -std=c++11 -Wall -ggdb

SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

hworld1: hworld1.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

hworld2: hworld2.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f $(OBJ) hworld1 hworld2
