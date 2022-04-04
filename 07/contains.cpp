#include <iostream>
using namespace std;

template <typename T>
bool contains(const T array[], int n, T value) {
  for (int i = 0; i < n; i++) {
    if (array[i] == value) {
      return true;
    }
  }
  return false;
}

int main() {
  int ia[] { 1, 2, 3};
  bool b1 = contains(ia, 3, 2);
    
  char ca[] = { 'a' , 'b', 'c' };
  bool b2 = contains(ca, 3, 'x');

  cout << b1 << ' ' << b2 << '\n';

  return 0;
}
