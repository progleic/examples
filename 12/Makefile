include ../Makefile.conf


all: test_persons test_shapes

test_persons: persons.hpp persons.cpp test_persons.cpp
	$(CXX) $(CXXFLAGS) -o test_persons persons.cpp test_persons.cpp
	
test_shapes: shapes.hpp shapes.cpp test_shapes.cpp coord2d.hpp coord2d.cpp
	$(CXX) $(CXXFLAGS) -o test_shapes test_shapes.cpp shapes.cpp coord2d.cpp

clean: 
	rm -f test_persons test_shapes

