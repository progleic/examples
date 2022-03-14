
#include <iostream>
using namespace std;

void reverse(const int a[], int b[], int n) {
  for (int i = 0; i < n; i++) {
    b[n - i - 1] = a[i];
  }
}

void reverse(int a[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int tmp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = tmp;
  }
}

void print(const int a[], int n) {
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) cout << ',' << a[i];
  cout << "]\n";
}

int main() {
  int a[5] { 1, 2, 3, 4, 5};
  int b[5];

  cout << "-- a --\n";
  print(a, 5);

  cout << "-- reverse(a, b, 5) --\n";
  reverse(a, b, 5);
  print(b, 5);

  cout << "-- reverse(a, 5) --\n";
  reverse(a, 5);
  print(a, 5);

  cout << "-- reverse(a, a, 5) [does not work correctly!] --\n";
  reverse(a, a, 5); // a stays the same!
  print(a, 5);

  return 0;
}

