#include <string>
#include <iostream>

namespace leic {
  class fraction {
  public:
    // Constructors
    fraction() : fraction(0) { }
    fraction(const fraction& f) : fraction(f.num, f.den) { }
    fraction(int n, int d = 1) : num(n), den(d) {
      reduce();
    }
    // Destructor (empty, can be omitted)
    ~fraction() { }
    
    // Member functions
    int numerator() const {
      return num;
    }
    int denominator() const {
      return den;
    }
    void add(const fraction& f) {
      num = num * f.den + f.num * den;
      den = den * f.den;
      reduce();
    }
    void mul(const fraction& f) {
      num = num * f.num;
      den = den * f.den;
      reduce();
    }
  private:
    int num, den;
    void reduce() {
      int g = gcd(num, den);
      num /= g;
      den /= g;
      if (den < 0)
      {
        num = -num;
        den = -den;
      }
    }
    // Static definitions
  public:
    const static fraction ZERO;
  private:
    static int gcd(int a, int b)
    {
      while (b != 0)
      {
        int tmp = a;
        a = b;
        b = tmp % b;
      }
      return a;
    }
    // Friend declarations
    friend std::ostream& operator<<(std::ostream& out, const fraction& f);
    friend class polynomial;
  };

  // Initialisation of ZERO class constant 
  // (must be outside class)
  const fraction fraction::ZERO(0);
 
  // Operator << 
  std::ostream& operator<<(std::ostream& out, const fraction& f) {
    // direct access to field possible due to friend declaration
    out << f.num; 
    if (f.den != 1)
      out << '/' << f.den;
    return out;
  }
}