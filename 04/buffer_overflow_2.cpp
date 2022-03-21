#include <iostream>
using namespace std;

struct mydata {
  int a[4];
  int n;
};

int main() {
  mydata d { { 1, 2, 3, 4 }, 0 };

  // For i = 4 we will have
  //  d.n += d.a[4]  <===> d.n += d.n !!
  for (int i = 0; i <= 4; i++) d.n += d.a[i];

  cout << "d.n = " << d.n << '\n';
  return 0;
}
