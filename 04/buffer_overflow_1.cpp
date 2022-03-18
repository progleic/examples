#include <iostream>
using namespace std;

int main() {
  // Stack grows down in the memory address space, 
  // so s is likely to be placed in memory *after* inp.
  char s[5]="LEIC";
  char inp[4];

  cout << "inp? "; 
  cin >> inp; // It will write onto inp
              // and s too if a string with 
              // length higher than 4 is introduced.
              // Note that the 0 terminator will also
              // be written.
  cout << inp << '@' << s << '\n';

  return 0;
}
