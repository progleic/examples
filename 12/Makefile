include ../Makefile.conf


all: shapes person_and_teacher

shapes: coord2d.o shapes.o
	$(CXX) $(CXXFLAGS) -o shapes shapes.o coord2d.o

clean: 
	rm -f  shapes person_and_teacher *.o 

