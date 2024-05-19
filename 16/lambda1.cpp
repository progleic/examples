
#include <iostream>
using namespace std;

int main() {

  auto f = []  (int x, int y) -> int { return x * x + y; };
  cout << f(1, 1) << ' ' << f(1, 2) << ' ' << f(2, 2) << '\n';
  return 0;

  // Two alternative definitions of f:
  // 1) With explicit return type:
  //   auto f = []  (int x, int y) -> int { return x * x + y; };
  // 2) Using std::function 
  ///  std::function<int(int,int)> f = [] (int x, int y) { return x * x + y; };
}