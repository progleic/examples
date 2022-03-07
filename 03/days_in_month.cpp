bool is_leap_year(int y) {
  return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

namespace v1 {
  // Implementation using if-else
  int days_in_month(int m, int y) {
    int d;
    if (m == 2)
      d = is_leap_year(y) ? 29 : 28; // February
    else if (m == 1 || m == 3 || 
               m == 5 || m == 7 || 
               m == 8 || m == 10 || 
               m == 12)
      d = 31; // Months with 31 days
    else 
      d = 30; // All other months have 30 days
    return d;
  }
}
namespace v2 {
  // Implementation using switch-case
  int days_in_month(int m, int y) {
    int d;
    switch (m) {
      case 2:
        d = is_leap_year(y) ? 29 : 28; // February
        break;
      case 1: case 3: case 5: 
      case 7: case 8: case 10: 
      case 12:
        d = 31; // Months with 31 days
        break;
      default:
        d = 30; // All other months have 30 days
        break;
    }
    return d;
  }
}

namespace v3 {
  // Incorrect implementation: missing break in switch-case
  int days_in_month(int m, int y) {
    int d;
    switch (m) {
      case 2:
        d = is_leap_year(y) ? 29 : 28; // February
        // break; BUG!
        // Execution continues
      case 1: case 3: case 5: 
      case 7: case 8: case 10: 
      case 12:
        d = 31; // Months with 31 days
        break;
      default:
        d = 30; // All other months have 30 days
        break;
    }
    return d;
  }
}

namespace v4 {
  // same as v2 but using enum to define constants
  enum { 
    JANUARY = 1,
    FEBRUARY, /* implicitly 2 */ MARCH, /* 3 */
    APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, 
    OCTOBER, NOVEMBER, DECEMBER /* 12 */
  };

  int days_in_month(int m, int y) {
    int r;
    switch (m) {
      case FEBRUARY:
        r = is_leap_year(y) ? 29 : 28; 
        break;
      case JANUARY: case MARCH: case MAY:
      case JULY: case AUGUST: case OCTOBER:
      case DECEMBER:
        r = 31; // Months with 31 days
        break;
      default:
        r = 30; // All others have 30 days
        break;
    }
    return r;
  }
}

#include <iostream>
using namespace std;
using namespace v4;

int main() {
  int y;
  cout << "year? "; cin >> y;
  for (int m = 1; m <= 12; m++) {
    int d = days_in_month(m, y);
    cout << m << '/' << y << " has " << d << " days\n";
  }
  return 0;
}


