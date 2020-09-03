# The Makefile is based on the explanation of Makefiles that is found here:
# http://nuclear.mutantstargoat.com/articles/make/

CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

debug: $(OBJ) 
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f $(OBJ) debug