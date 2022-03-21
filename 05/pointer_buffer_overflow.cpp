int main() {
  char s[6] = "C/C++";
  char* p = &s[4];
  p[2] = 'X'; // <=> s[6] = 'X'; <-- BUFFER OVERFLOW!
  return 0;
}
