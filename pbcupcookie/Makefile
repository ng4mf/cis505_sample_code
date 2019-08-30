# The Makefile is based on the explanation of Makefiles that is found here:
# http://nuclear.mutantstargoat.com/articles/make/

CXX = g++
CXXFLAGS = -std=c++11 -Wall -g -I./emptydir -fsanitize=address
LDFLAGS = -pthread -lasan

SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

cook: $(OBJ) 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) cook
