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
          reference_variables get_min_max

all: $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)

