#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
  vector<int> v { 10, 20, 30 };
  int i = 0;
  for_each(v.begin(), v.end(),
           [ &i ] (int x) { 
              cout << i << ": " << x << '\n';
              i++; // Increment i
            });
  cout << "i=" << i << '\n'; // 3 at the end
  return 0;
}
