
template <typename T>
void min_max_sum
(T a, T b, T& min, T& max, T& sum) {
  min = a < b ? a : b;
  max = a > b ? a : b;
  sum = a + b;
}

#include <iostream>
using namespace std;

int main() {

  int imin, imax, isum;
  min_max_sum(-123, 123, imin, imax, isum);
  cout << imin << ' ' << imax << ' ' << isum << '\n';
  
  double dmin, dmax, dsum;
  min_max_sum(-12.5, 7.4, dmin, dmax, dsum);
  cout << dmin << ' ' << dmax << ' ' << dsum << '\n';

/* Invalid use (dsum has type double)
  min_max_sum(-123, 123, imin, imax, dsum); 
*/

/* Invalid use: the operators required 
  by the template are not defined for the type.

   struct time_of_day { 
    unsigned char h; 
    unsigned char m; 
  };

  time_of_day tmin, tmax, tsum;
  min_max_sum({0, 0}, { 23, 59 }, tmin, tmax, tsum);
*/  

  
  return 0;
}
