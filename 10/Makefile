include ../Makefile.conf

all: fraction_example polynomial_example 
libleic.a: fraction.o polynomial.o
	ar cr libleic.a fraction.o polynomial.o 
fraction_example: libleic.a fraction_example.o
	$(CXX) $(CXXFLAGS) -o fraction_example fraction_example.o libleic.a
polynomial_example: libleic.a polynomial_example.o 
	$(CXX) $(CXXFLAGS) -o polynomial_example polynomial_example.o libleic.a

clean: 
	rm -f  libleic.a fraction_example polynomial_example *.o

