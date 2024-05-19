
#include <iostream>
using namespace std;

int main() {
  {
    int i = 123;
    auto f = [=] (int x) { return x + i; };
    cout << f(1) << '\n'; // -> 124
    i = 321;
    cout << f(1) << '\n';; // -> 124 again
  }
    {
    int i = 123;
    auto f = [&] (int x) { return x + i; };
    cout << f(1) << '\n'; // -> 124
    i = 321;
    cout << f(1) << '\n';; // -> 322
  }
  return 0;
}