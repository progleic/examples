#include <iostream>
using namespace std;

int main() {
  int a = 1, b = 2, c = 3;
  int* iparr[3] = { &a, &b, &c };
  for (int i = 0; i < 3; i++) { 
    cout << iparr[i] << ' ' << *iparr[i] << '\n';
    *iparr[i] = 0; 
  }
  cout << a << ' ' << b << ' ' << c << '\n'; 
  
  const char* sparr[] = { "Hello", "_", "C++" };
  for (const char* s : sparr) cout << s; 
  cout << '\n';
}
