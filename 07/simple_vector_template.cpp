template <typename T>
struct simple_vector {
  T* elements;
  int capacity;
  int size;
};

template<typename T>
int size(const simple_vector<T>* sv) {
  return sv->size;
}

template<typename T>
T get(const simple_vector<T>* sv, int i) {
  return sv->elements[i];
}

template<typename T>
simple_vector<T>* build(int n) {
  simple_vector<T>* sv = new simple_vector<T>;
  sv->elements = new T[n];
  sv->capacity = n;
  sv->size = 0;
  return sv;
}

template<typename T>
void destroy(simple_vector<T>* sv) {
  delete [] sv->elements;
  delete sv;
}

template<typename T>
void add(simple_vector<T>* sv, T x) {
  if (sv->capacity == sv->size) {
    // Create new array
    int new_capacity = 2 * sv->capacity;
    T* new_array = new int[new_capacity] ;
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
  simple_vector<int>* sv = build<int>(2);
  add(sv, 2);
  add(sv, 5);
  add(sv, 1);
  add(sv, 3);
  for (int i = 0; i < size(sv); i++) 
     cout << get(sv, i) << '\n';
  destroy(sv);
  return 0;
}
