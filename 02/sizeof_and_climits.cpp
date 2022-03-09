#include <iostream>
#include <climits>
using namespace std;

int main(void) {
  cout 
       << "char:           " << sizeof(char)            
                             << " [" << CHAR_MIN << ", " << CHAR_MAX  << "]\n"
       << "unsigned char:  " << sizeof(unsigned char)   
                             << " [" << 0        << ", " << UCHAR_MAX << "]\n"
       << "short:          " << sizeof(short) << " ["   
                             << SHRT_MIN         << ", " << SHRT_MAX  << "]\n"
       << "unsigned short: " << sizeof(unsigned short)  
                             << " [" << 0         << ", " << USHRT_MAX << "]\n"
       << "int:            " << sizeof(int) 
                             << " [" << INT_MIN  << ", " << INT_MAX   << "]\n"
       << "unsigned int:   " << sizeof(unsigned int)    
                             << " [" << 0 << ", "        << UINT_MAX  << "]\n"
       << "long:           " << sizeof(long)  
                             << " [" << LONG_MIN << ", " << LONG_MAX  << "]\n"
       << "unsigned long:  " << sizeof(unsigned long)   
                             << " [" << 0 << ", "        << ULONG_MAX << "]\n";
  return 0;
}
