class interval {
private:
  int start_, end_;
public:
  interval (int start, int end) 
    : start_(start), end_(end) {}
  bool operator () (int x) const {
    return x >= start_ && x <= end_;
  }
};

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

  // "Direct" use
  interval in_2_10(2,10);
  cout << boolalpha 
       << in_2_10(1) << ' '
       << in_2_10(7) << '\n';
  
  // Use in conjunction with count_if (STL algorithm)
  vector<int> v { 1, 23, 5, 6, 32, 0, 45, 3 };
  cout << count_if(v.begin(), v.end(), interval(20,40)) << '\n';

  return 0;
}