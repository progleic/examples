CXX=g++
CXXFLAGS= -g \
          -std=c++11 \
          -Wall \
          -Werror \
          -fsanitize=address \
          -fsanitize=undefined \
	  -pedantic

LDFLAGS=-lm

PROGRAMS= sizeof_and_climits

all: $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)

