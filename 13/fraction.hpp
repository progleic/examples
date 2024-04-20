#ifndef __fraction_hpp__
#define __fraction_hpp__
#include <string>
#include <iostream>

namespace leic {
  class fraction {
  public:
    // Constructors
    fraction(int n, int d = 1);
    fraction();
    fraction(const fraction& f);
    // Destructor.
    ~fraction();

    // Member functions
    int numerator() const;
    int denominator() const;

    // Comparison operators
    bool operator==(const fraction& f) const;
    bool operator!=(const fraction& f) const;
    bool operator<(const fraction& f) const;
    bool operator<=(const fraction& f) const;
    bool operator>(const fraction& f) const;
    bool operator>=(const fraction& f) const;


    // Assignment and composed assignment
    fraction& operator=(const fraction& f);
    fraction& operator+=(const fraction& f);
    fraction& operator-=(const fraction& f);
    fraction& operator*=(const fraction& f);
    fraction& operator/=(const fraction& f);

    // Arithmetic operators
    fraction operator+(const fraction& f) const;
    fraction operator-(const fraction& f) const;
    fraction operator-() const;
    fraction operator*(const fraction& f) const;
    fraction operator/(const fraction& f) const;

  private:
    int num, den;
    void reduce();
    // Static definitions
  public:
    const static fraction ZERO;
  private:
    static int gcd(int a, int b);
  };
  std::ostream& operator<<(std::ostream& out, const fraction& f);
}
#endif
