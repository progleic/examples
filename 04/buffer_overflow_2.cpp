

#include <iostream>
using namespace std;

struct mydata {
  int a[4];
  int n;
};

int main() {
  mydata d { { 1, 2, 3, 4 }, 0 };
  for (int i = 0; i <= 4; i++) d.n += d.a[i];
  cout << d.n << '\n';
  return 0;
}
