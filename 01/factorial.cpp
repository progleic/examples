#include <iostream>
using namespace std;

int factorial(int n) {
  int r = 1;
  for (int i = 1; i <= n; i++) r = r * i; 
  return r;
}

int main() {
  int n;
  cout << "n ? ";
  cin >> n;
  cout <<  n << "! = " << factorial(n) << "\n";
  return 0;
}
