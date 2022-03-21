#include <iostream>
using namespace std;

struct time_of_day {
  unsigned char h;
  unsigned char m;
};

struct interval {
  int id;
  time_of_day start;
  time_of_day end;
};

void print(const char v[], const interval& il) {
  cout << v << ": " 
       << il.id << ' ' 
       << (int) il.start.h << ':' << (int) il.start.m << ' '
       << (int) il.end.h   << ':' << (int) il.end.m << '\n';
}

int main() {
  cout << "sizeof(interval): " << sizeof(interval) << '\n';

  interval a { 1, { 17, 30 }, {18, 30} };
  print("a", a);

  interval b = a;
  print("b", b);

  return 0;
}
