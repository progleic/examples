#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
  int a[7] = { 1, 5, 6, 0, 3, 4, 2 };
  sort (a, a + 7);
  for (int v : a) 
    cout << v << ' '; 
  cout << '\n';
  return 0;
}
