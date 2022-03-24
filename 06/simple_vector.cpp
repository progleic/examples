struct simple_vector {
  int* elements;
  int capacity;
  int size;
};
int size(const simple_vector* sv) {
  return sv->size;
}
int get(const simple_vector* sv, int i) {
  return sv->elements[i];
}
simple_vector* build(int n) {
  simple_vector* sv = new simple_vector;
  sv->elements = new int[n];
  sv->capacity = n;
  sv->size = 0;
  return sv;
}
void destroy(simple_vector* sv) {
  delete [] sv->elements;
  delete sv;
}
void add(simple_vector* sv, int x) {
  if (sv->capacity == sv->size) {
    // Create new array
    int new_capacity = 2 * sv->capacity;
    int* new_array = new int[new_capacity] ;
    // Copy elements from old to new array
    for (int i = 0; i < sv->capacity; i++)
      new_array[i] = sv->elements[i];
    // Free memory for old array
    delete [] sv->elements; 
    // Point to new array 
    sv->elements = new_array;
    sv->capacity = new_capacity;
  }
  sv->elements[sv->size] = x;
  sv->size++;
}

#include <iostream>
using namespace std;

int main() {
  simple_vector* sv = build(2);
  add(sv, 2);
  add(sv, 5);
  add(sv, 1); // grows capacity to 4
  add(sv, 3);
  for (int i = 0; i < size(sv); i++) 
     cout << get(sv, i) << '\n';
  destroy(sv);
  return 0;
}
