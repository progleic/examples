#ifndef __polynomial_hpp__
#define __polynomial_hpp__
#include <iostream>
#include <vector>
#include "fraction.hpp"

namespace leic {
  class polynomial {
  public:
    polynomial(const std::vector<fraction>& c);
    ~polynomial();
    int degree() const;
    void add(const polynomial& p);
    fraction evaluate(const fraction& x) const;
  private:
    std::vector<fraction> coeffs;
    void reduce();
    friend std::ostream& operator<<(std::ostream& os, const polynomial& p);
  };
  std::ostream& operator<<(std::ostream& out, const polynomial& p);
}
#endif
