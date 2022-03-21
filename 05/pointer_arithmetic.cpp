#include <iostream>
#include <iomanip>
using namespace std;

void example_1() {
  cout << "== example 1 ==\n";
  char s[6] = "C/C++";
  cout << s << '\n';
  char* p = &s[3]; 
  p++;      // p now points to s[4]
  *p = '*'; // <=> s[4] = 'Z';
  p--;      // p points to s[3] again
  *p = '*'; // 
  cout << s << '\n'; // --> "C/C**"
}

void example_2() {
  cout << "== example 2 ==\n";
  char s[6] = "C/C++";
  cout << s << '\n';
  char* p = s + 4; // <=> p = &s[4];
  char* q  = p - 4; // <=> q = &s[0];
  *(p - 3) = '+';  // <=> s[1] = '+';
  *(q + 3) = '/';  // <=> s[3] = '/';
  cout << s << '\n'; // --> "C+C/+"
  int n = p - q; // <=> n = &s[4] - &s[0];
  cout << n << '\n'; // --> 4
}

void example_3() {
  cout << "== example 3 ==\n";
  char a[5]; 
  char* p = a + 1; 
  char* q = a + 2;
  cout << boolalpha 
   <<  "p == q ? " << (p == q) << " / p != q ? " << (p != q) 
   << "\np < q ? " << (p < q)  << " / q < p ? "  << (q < p) 
   << "\np > q ? " << (p > q)  << " / q > p ? "  << (q > p) << '\n';
}

int main() {
  example_1();
  example_2();
  example_3();
}
