
#include <iostream>
#include <cstring>
using namespace std;

int length(const char str[]) {
  int l = 0;
  while (str[l] != '\0') 
    l++;
  return l;
}

void copy(char dst[], const char src[]) {
  int i = 0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
}

void concat(char dst[], const char src[]) {
  int i = length(dst);
  int j = 0;
  while (src[j] != '\0') {
    dst[i] = src[j]; 
    i++; j++;
  }
  dst[i] = '\0';
}

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
