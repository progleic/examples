
namespace v1 {
  // Uses while loop
  bool is_prime(int n) {
    if (n <= 1)
      return false;
    int i = 2; 
    while (i < n) {
      if (n % i == 0) 
        return false;
      i++;
    }
    return true;
  }
}

namespace v2 {
  // Uses do-while loop
  bool is_prime(int n) {
    if (n <= 1) 
      return false; 
    if (n == 2) 
      return true;
    int i = 2;
    do {
      if (n % i == 0)
        return false;
      i++;
    } while (i < n);
    return true;
  }
}

namespace v3 {
  // Uses for loop
  bool is_prime(int n) {
    if (n <= 1)
      return false;
    for (int i = 2; i < n; i++) {
      if (n % i == 0) 
        return false;
    }
    return true;
  }
}

namespace v4 {
  // while(true) loop together with break
  bool is_prime(int n) {
    if (n <= 1)
      return false;
    int i = 2; 
    while (true) {
      if (i == n || n % i == 0)
        break;
      i++;
    }
    return i == n; // prime only if i == n 
  }
}

namespace v5 {
  // while loop together with continue 
  bool is_prime(int n) {
    if (n <= 1)
      return false;
    int i = 2; 
    while (i < n) {
      if (n % i != 0) {
        i++;
        continue; 
      } 
      return false;
    }
    return true; 
  }
}

#include <iostream>
using namespace std;
using namespace v5;

int main() {
  cout << "Prime numbers lower than 100:\n";
  for (int n = 1; n <= 100; n++) {
    if (is_prime(n)) {
      cout << "  "<< n << "\n";
    }
  }
  return 0;
}
