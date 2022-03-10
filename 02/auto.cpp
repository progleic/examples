
#include <iostream>
using namespace std;

int main() {
                 // Inferred types
  auto x = 10;   // int
  auto y = 10UL; // unsigned long
  auto z = 1.2f; // float
  auto w = 1.2;  // double
  cout << sizeof(x) << ' ' << sizeof(y) << ' ' 
       << sizeof(z) << ' ' << sizeof(w) << "\n";
  return 0;
}
