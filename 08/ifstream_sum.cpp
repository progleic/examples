#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Version 1 - reads numbers from files and sums them.
void version_1() {
  ifstream in("numbers.txt");
  double sum = 0;
  while (true) {
    double x; 
    in >> x;
    if (in.eof()) break;
    sum += x;
    // cout << "Read " <<  x << '\n';
  }
  cout << "Sum: " << sum << '\n';
}

// Version 2 - equivalent to version 1 but more succint.
void version_2() {
  ifstream in("numbers.txt");
  double sum = 0, x;
  while (in >> x) {
    sum += x;
    // cout << "Read " <<  x << '\n';
  }
  cout << "Sum: " << sum << '\n';
}

// Version 3 - sums numbers line by line
void version_3() {
  ifstream in("numbers.txt");
  string line;
  int line_count = 1;
  while (getline(in, line)) {
    double sum = 0, x;
    istringstream iss(line);
    while(iss >> x) sum += x;
    cout << "Line " << line_count 
         <<   " - Sum: " << sum << '\n';
    line_count++;
  }
}

// Version 3 - similar to version 3 but prints to an output file.
void version_4() {
  ifstream in("numbers.txt");
  ofstream out("sums.txt");
  string line;
  int line_count = 1;
  while (getline(in, line)) {
    double sum = 0, x;
    istringstream iss(line);
    while(iss >> x) sum += x;
    out << "Line " << line_count 
        <<   " - Sum: " << sum << '\n';
    line_count++;
  }
}



int main() {
  cout << "== version_1 ==\n";
  version_1();
  cout << "== version_2 ==\n";
  version_2();
  cout << "== version_3 ==\n";
  version_3();
  cout << "== version_4 (see sums.txt for output) ==\n";
  version_4();
  return 0;
}
