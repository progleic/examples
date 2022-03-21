
// main_with_args.cpp
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
  for (int i = 0; i < argc; i++)
    cout << "Arg. " << i << ": \"" 
         << argv[i] << "\"\n";
  return 0;
}
