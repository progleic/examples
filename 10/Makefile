include ../Makefile.conf

PROGRAMS=fraction_example polynomial_example

all: $(PROGRAMS)

fraction_example: fraction.o fraction_example.o
	$(CXX) $(CXXFLAGS) -o fraction_example fraction_example.o fraction.o 

polynomial_example: fraction.o polynomial.o polynomial_example.o 
	$(CXX) $(CXXFLAGS) -o fraction_example polynomial_example.o fraction.o polynomial.o 

clean: 
	rm -f $(PROGRAMS) *.o

