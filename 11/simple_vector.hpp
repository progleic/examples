#ifndef __simple_vector_hpp__
#define __simple_vector_hpp__

template <typename T>
class simple_vector {
public:
  simple_vector(int initial_capacity = 5);
  simple_vector(const simple_vector<T>& sv);
  ~simple_vector();
  int size() const;
  int capacity() const;
  void add(const T& elem);
  T& at(int index);
  const T& at(int index) const;
private:
    // Capacity of the array.
    int capacity_;
    // Stored elements.
    int size_;
    // Dynamically allocated array holding elements.
    T* elements_; 
};

template <typename T>
simple_vector<T>::simple_vector(int initial_capacity) :
  capacity_(initial_capacity), size_(0) {
    elements_ = new T[capacity_];
}

template <typename T>
simple_vector<T>::simple_vector(const simple_vector<T>& sv) :
  capacity_(sv.capacity_), size_(sv.size_) {
    elements_ = new T[capacity_];
    for (int i = 0; i < size_; i++) {
      elements_[i] = sv.elements_[i];
    }
}

template <typename T>
simple_vector<T>::~simple_vector() {
  delete [] elements_;
}

template <typename T> 
int simple_vector<T>::size() const {
  return size_;
}

template <typename T> 
int simple_vector<T>::capacity() const {
  return capacity_;
}

template <typename T> 
void simple_vector<T>::add(const T& elem)  {
  if (capacity_ == size_) {
    // Create new array with double the capacity
    int new_capacity = 2 * capacity_;
    T* new_array = new T[new_capacity];
    // Copy elements from old to new array
    for (int i = 0; i < capacity_; i++)
      new_array[i] = elements_[i];
    // Free memory for old array
    delete [] elements_;
    // Point to new array
    elements_ = new_array;
    capacity_ = new_capacity;
  }
  elements_[size_] = elem;
  size_++;
}

template <typename T> 
const T& simple_vector<T>::at(int index) const {
  return elements_[index];
}

template <typename T> 
T& simple_vector<T>::at(int index) {
  return elements_[index];
}
#endif