namespace v1 {
  // for loop
  int factorial(int n) {
    int r = 1;
    for (int i = 1; i <= n; i++) 
      r = r * i; 
    return r;
  }
}

namespace v2 {
  // while loop
  int factorial(int n) {
    int r = 1;
    while (n > 0) {
      r = r * n; 
      n--; // decrement n
    } 
    return r;
  }
}

namespace v3 {
  // Recursive implementation
  int factorial(int n) {
    if (n <= 1) 
      return 1;
    return n * factorial(n - 1);
  }
}
namespace v4 {
  // Recursive implementation variant (uses ? :)
  int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
  }
}

#include <iostream>
using namespace std;
using namespace v2;

int main() {
  int n;
  cout << "n ? ";
  cin >> n;
  cout <<  n << "! = " << factorial(n) << "\n";
  return 0;
}
