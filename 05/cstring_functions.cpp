
// For the same functions implemented without using pointer arithmetic
// check https://github.com/progleic/examples/blob/main/04/cstring_functions.cpp

int length(const char str[]) {
  const char* p = str;
  while (*p != '\0') p++;
  return p - str;
}

void copy(char dst[], const char src[]) {
  char* p = dst;
  const char* q = src;
  while (*q != '\0') {
    *p = *q;
    p++; q++;
  }
  *p = '\0';
}

void concat(char dst[], const char src[]) {
  char* p = dst + length(dst);
  const char* q = src;
  while (*q != '\0') {
    *p = *q;
    p++; q++;
  }
  *p = '\0';
}

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char s[12 + 1]; 
  copy(s, "Prog");
  concat(s, "#LEIC");
  concat(s, "@UP");
  cout << length(s) << ' ' << s << '\n'; 

  // Now using library functions
  strcpy(s, "Prog");
  strcat(s, "#LEIC");
  strcat(s, "@UP");
  cout << strlen(s) << ' ' <<  s << '\n'; 
 
  return 0;
}
