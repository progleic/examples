
#include <iostream>
using namespace std;

void print(const int a[], int n) {
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) cout << ',' << a[i];
  cout << "]\n";
}

int main() {
  int a[4] { 1, 2, 3, 4 };
  print(a, 4);

  for (int& v : a) v *= v;
  print(a, 4);

  int n = 0;
  for (int v: a) n += v;
  cout << n << '\n';

  return 0;
}
