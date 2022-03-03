CXX=g++
CXXFLAGS= -g \
          -std=c++11 \
          -Wall \
          -Werror \
          -fsanitize=address \
          -fsanitize=undefined \
	  -pedantic

LDFLAGS=-lm

PROGRAMS=hello hello2 hello-not-indented factorial

all: $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)

