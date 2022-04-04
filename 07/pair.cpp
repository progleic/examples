
#include <utility>
#include <iostream>

using namespace std;


int main() {
  
  pair<int, float> x { 1, 2.5 };
  cout << x.first << ' ' << x.second << '\n';

  pair<double, int> y { 2.5, 1};
  cout << y.first << ' ' << y.second << '\n';

  struct time_of_day {
    unsigned char h;
    unsigned char m;
  };
  pair<const char*, time_of_day> z { "Hello", { 23, 59 } };
  cout << z.first << ' ' 
            << (int) z.second.h << ':' 
            << (int) z.second.m << '\n';

  auto x2 = make_pair(1, 2); 
  cout << x2.first << ' ' << x2.second << '\n';

  auto y2 = make_pair("Hello", "World");
  cout << y2.first << ' ' << y2.second << '\n';

  typedef pair<const char*, const char*> spair; 
   
  spair y3 = make_pair("Hello", "World");
  cout << y3.first << ' ' << y3.second << '\n';

  return 0;
}


