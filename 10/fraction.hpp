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
    void add(const fraction& f); 
    void mul(const fraction& f);
  private:
    int num, den;
    void reduce();
    // Static definitions
  public:
    const static fraction ZERO;
  private:
    static int gcd(int a, int b);
    // Friend declarations
    friend std::ostream& operator<<(std::ostream& out, const fraction& f);
    friend class polynomial;
  };
  std::ostream& operator<<(std::ostream& out, const fraction& f);
}
#endif
