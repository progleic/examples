
namespace no_pointer_version {
  void reverse(int a[], int n) {
    int i = 0, j = n - 1;
    while (i < j) { // i != j would be incorrect (for odd n)
      int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
      i++; j--;
    }
  }
}

namespace pointer_version {
  void reverse(int a[], int n) {
    int* p = a;
    int* q = a + n - 1;
    while (p < q) { // p != q would be incorrect (for odd n)
      int tmp = *p; *p = *q; *q = tmp;
      p++; q--;
    }
  }
}

#include <iostream>
using namespace std;

int main() {
  int a[6] { 1, 2, 3, 4, 5, 6 };
  pointer_version::reverse(a, 6);
  for (int x : a ) cout << x << '\n';
  no_pointer_version::reverse(a, 6);
  for (int x : a ) cout << x << '\n';
  return 0;
}
