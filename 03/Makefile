CXX=g++
CXXFLAGS= -g \
          -std=c++11 \
          -Wall \
          -Werror \
          -fsanitize=address \
          -fsanitize=undefined \
	  -pedantic

LDFLAGS=-lm

PROGRAMS= days_in_month factorial is_leap_year is_prime max \
          reference_variables call_by_reference

all: $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)

