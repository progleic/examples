template <typename T>
T abs_diff(T a, T b) {
  return a > b ? b - a : a - b;
}
// Alternative version that uses a local variable of type T
// template <typename T>
// T abs_diff(T a, T b) {
//   T r;
//   if (a > b)
//     r = a - b;
//   else 
//     r = b - a;
//   return r;
// }

#include <iostream>
using namespace std;
int main() {
  // T <- int
  int x = abs_diff(1, 2); 
  // T <- double
  double y = abs_diff(3.4, 1.2); 
  cout << x << ' ' << y << '\n';
  
  // INVALID: T <- int or double?
  // cout << abs_diff(1, 2.3); 

  // INVALID: < and - not defined for point2d
  //  struct point2d { int x; int y; };
  // point2d a {0, 0}, b {1, 2};
  // point2d c = abs_diff(a, b);
  
  return 0;
}
