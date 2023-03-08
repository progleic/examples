#include <iostream>
using namespace std;

// Struct for a matrix of integers.
struct imatrix {
  unsigned int rows;
  unsigned int cols;
  int* values;
};

// Allocate dynamic memory for a matrix
// with given dimensions
imatrix* allocate(unsigned int rows, unsigned int cols) {
  // Allocate memory for matrix data, then for values
  imatrix* m = new imatrix;
  m -> rows = rows;
  m -> cols = cols;
  m -> values = new int[rows * cols];
  return m;
}

void release(imatrix* m) {
  // Release memory for matrix values, then the matrix data.
  delete [] m -> values;
  delete m;
}

// Get index for position (r,c)
unsigned int index(const imatrix* m, unsigned int r, unsigned int c) {
  return r * m->cols + c;
}

// Get value at position (r,c) - note the use of const!
int pos(const imatrix* m, unsigned int r, unsigned c) {
  return m->values[index(m, r, c)];
}

// Get reference for position (r,c).
// Code is the same as above but a reference is returned!
int& pos(imatrix* m, unsigned int r, unsigned c) {
  return m->values[index(m, r, c)];
}

void print(const imatrix* m) {
  cout << "==" << m -> rows << 'x' << m -> cols << "==\n";
  for (unsigned int r = 0; r < m -> rows; r++) {
    for (unsigned int c = 0; c < m -> cols; c++) {
      cout << pos(m, r, c) << ' ';
    }
    cout << "\n";
  }
}

int main() {
  // Build a 6 x 4 matrix 
  const int rows = 6, cols = 4;
  imatrix* m = allocate(rows, cols); 
  
  // Fill the matrix such that position (r,c)
  // hols value 10 * r + c
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {  
      pos(m, r, c) = 10 * r + c; 
    }
  }
  // Print the matrix
  print(m);
  
  // Free memory for matrix
  release(m);
}
