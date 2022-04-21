#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//! Determines if a string is a heterogram (contains no repeated letters).
//! Any repeated letters will be placed in r in lowercase.
bool heterogram(const string& s, string& r) {
  int count[26] = { 0 };
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
      if (s[i] >= 'a' && s[i] <= 'z') 
        count[s[i] - 'a']++;
      else
        count[s[i] - 'A']++;
    }
  }
  // determines repeated letters
  r.clear();
  for (char c = 'a'; c <= 'z'; c++) {
    if (count[c - 'a'] > 1) {
      r.push_back(c);
    } 
  } 
  return r.empty();
}

void test(const string& s) {
  string r;
  bool b = heterogram(s, r);
  cout << '\"' << s << "\" "
       << boolalpha << b << ' '  
       << '\"' << r << "\"\n";
}

int main() {
  test("up leic");
  test("fcup feup");
  test("heterogram");  
  return 0;
}

