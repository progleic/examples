#include <iostream>
using namespace std;

struct time_of_day {
  unsigned char h;
  unsigned char m;
};

void print(time_of_day t) {
  cout << (int) t.h << ':' 
       << (int) t.m << '\n';
}

void example_1() {
  cout << "== example 1 ==\n";
  time_of_day t { 12, 57 };
  print(t);
  time_of_day* p = &t;
  (*p).h = 13;
  (*p).m = 58;     // t now contains { 13, 58 }
  print(t);
  *p = { 14, 59 }; 
  print(t);
}

void example_2() {
  cout << "== example 2 ==\n";
  time_of_day t { 12, 57 };
  time_of_day* p = &t;
  p -> h = 13; // <=> (*p).h = 13;
  p -> m = 58; // <=> (*p).m = 58;
  print(t);
}

void example_3() {
  cout << "== example 3 ==\n";
  time_of_day t { 12, 57 };
  time_of_day* p = &t;
  unsigned char* h = &(t.h);
  unsigned char* m = &(p -> m);
  *h = 13; // <=> t.h = 13;
  *m = 58; // <=> t.m = 58;
  print(t);
}

int main() {
  example_1();
  example_2();
  example_3();
  return 0;
}
