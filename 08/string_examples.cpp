#include <iostream>
#include <string>
using namespace std;

void example_1() {
  cout << "-- example 1 --\n";

  string a; // empty string (default constructor) 
  string b("ABC"); // from C string
  string c = "DEF"; // from C string (syntactic alternative)
  string d("IJKL", 3); // from C string, up to 3 chars
  string e(d); // copy
  string f = d; // copy also

  cout << "a: \"" << a << "\"\n"
       << "b: \"" << b << "\"\n"
       << "c: \"" << c << "\"\n"
       << "d: \"" << d << "\"\n"
       << "e: \"" << e << "\"\n"
       << "f: \"" << f << "\"\n";
}
void example_2() {
  cout << "-- example 2 --\n";

  string s = "ABC";            // s <-- "ABC"
  int n = s.length();          // n <-- 3
  char c = s.at(2);            // c <-- 'C'
  s.append("DEF");             // s <-- "ABCDEF"
  s.push_back('G');            // s <-- "ABCDEFG"
  s.at(2) = '_';               // s <-- "AB_DEFG 
  const char* str = s.c_str(); // str <-- "AB_DEFG"

  cout << "s: \"" << s << "\"\n"
       << "n: " << n << "\n"
       << "c: '" << c << "'\n"
       << "str: \"" << str << "\"\n";
}
void example_3() {
  cout << "-- example 3 --\n";

  string a("ABC"), b("DEF");
  a += b;     // a <-- "ABCDEF"
  a += b[0];  // a <-- "ABCDEFD"
  b = a;      // b <-- "ABCDEFD"
  a = "XYZ";  // a <-- "XYZ";

  cout << "a: \"" << a << "\"\n"
       << "b: \"" << b << "\"\n";
}
void example_4() {
  cout << "-- example 4 --\n";

  string* pa = new string();
  string* pb = new string("abcdef");
  string c("ghi"); // stack-allocated
  string* pc = &c;
  pa->append(*pb); 
  (*pa).append(*pc); 
  cout << *pa << ' ' << pa->length() << '\n';
  delete pa;
  delete pb;
}

int main() {
  example_1();
  example_2();
  example_3();
  example_4();
  return 0;
}
