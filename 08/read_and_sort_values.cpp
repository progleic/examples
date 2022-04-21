#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  vector<int> v;
  while (true) { 
     int x; cin >> x;
     if (x == 0) break;
     v.push_back(x);
  }
  sort(v.begin(), v.end());
  for (int x : v) cout << x << ' ';
  cout << '\n';
  return 0;
}  
