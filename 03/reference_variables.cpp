#include <iostream>
using namespace std;

void example_1() {
  cout << "== example 1 ==\n";
  int  v = 1;
  int& r = v;
  cout << v << ' ' << r << '\n'; // --> 1 1
  v++;
  cout << v << ' ' << r << '\n'; // --> 2 2
  r++;
  cout << v << ' ' << r << '\n'; // --> 3 3 
}


void example_2() {
  cout << "== example 2 ==\n";
  int v1 = 10;
  int v2 = 20;
  int& r = v1;
  r = v2; // v1 is assigned the value of v2 
  v2++;   // increment of v2 does not affect v1
  cout << r << ' ' << v1 << ' ' << v2 << '\n'; // 20 20 21
}

void example_3() {
  cout << "== example 3 ==\n";
  int  v  = 0;
  int& r1 = v; // r1 refers to v 
  int& r2 = v; // r2 refers to v
  int& r3 = r2; // r3 refers to v (reference copy)
  r1++; r2++; r3++;
  cout << v << '\n'; // --> 3
}

int main() {
  example_1();
  example_2();
  example_3();
  return 0;
}
