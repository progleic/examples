#include <iostream>
#include <limits>
using namespace std;

int read_int() {
  int x;
  while (true) {
    cin >> x;
    if (cin.good())
      break;
    cin.clear(); // clear error flag
    cin.ignore(1); // skip 1 character and try again
  }
  return x;
}

int read_int_v2() {
  int x;
  while (true) {
    cin >> x;
    if (cin.good())
      break;
    cin.clear(); // clear error flag
    cin.ignore(std::numeric_limits<std::streamsize>::max(), 
               '\n'); // skip rest of the line
  }
  return x;
}

int main() {
  cout << read_int() << '\n';
  cout << read_int_v2() << '\n';
  return 0;
}
