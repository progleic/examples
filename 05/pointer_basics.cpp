#include <iostream>
using namespace std;

int main() {
  int v = 123;
  int *p = &v;
  *p = *p + 1; 
  cout << p << ' ' << *p << ' ' << v << '\n';
  return 0;
}
