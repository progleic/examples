#include <string>
#include <iostream>

using namespace std;

int main() {
   string s = "abcde";

   // Convert string to upper case
   for (char& c : s) {
      c = toupper(c);
   }

   // Iterate characters and print them
   for (char c : s) {
      cout << c;
   }
   cout << '\n';
}
