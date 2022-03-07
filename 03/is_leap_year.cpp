
namespace v1 {
  bool is_leap_year(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
  }
}

namespace v2 {
  bool is_leap_year(int y) {
    bool r;
    if (y % 4 == 0 && y % 100 != 0) 
      r = true;
    else if (y % 400 == 0)
      r = true;
    else 
      r = false;
    return r;
  }
}

namespace v3 {
  bool is_leap_year(int y) {
    bool r = true;
    if (y % 4 != 0 || y % 100 == 0) 
      if (y % 400 != 0) 
        r = false;
    return r;
  }
}

#include <iostream>
using namespace std;
using namespace v3;

int main() {
  cout << "leap years from 2000 to 2100:\n";
  for (int y = 2000; y <= 2100; y++) {
    if (is_leap_year(y)) {
      cout << "  "<< y << "\n";
    }
  }
  return 0;
}
