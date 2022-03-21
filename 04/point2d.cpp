
#include <iostream>
using namespace std;

struct point2d {
  double x;
  double y;
};

point2d sum(point2d a, point2d b) {
  point2d r;
  r.x = a.x + b.x;
  r.y = a.y + b.y;
  return r;
}

void sum(const point2d& a, const point2d& b, point2d& r) {
  r.x = a.x + b.x;
  r.y = a.y + b.y;
}

int main() {
  cout << "sizeof(point2d): " << sizeof(point2d) << '\n';
 
  point2d a { 1.2, 3.4 };
  cout << "a: " << a.x << ' ' << a.y << '\n';

  point2d b = a;
  cout << "b: " << a.x << ' ' << b.y << '\n';

  point2d s1 = sum(a,b);
  cout << "s1: " << s1.x << ' ' << s1.y << '\n';

  point2d s2; 
  sum(a, b, s2);
  cout << "s2: " << s2.x << ' ' << s2.y << '\n';
   
  return 0;
}

