#include <iostream>
#include <vector>
#include "fraction.hpp"

namespace leic {
  class polynomial {
  public:
    polynomial(const std::vector<fraction>& c) 
    : coeffs(c) {
      if (coeffs.empty()) // ensure 0 coefficient at least
        coeffs.push_back( { 0, 1} ); 
      reduce();
    }    
    ~polynomial() { }

    int degree() const {
      return coeffs.size() - 1;
    }
    void add(const polynomial& p) {
      int n = std::min(coeffs.size(), p.coeffs.size());
      for (size_t i = 0; i < n; i++) {
        coeffs[i].add(p.coeffs[i]);
      }
      for (size_t i = coeffs.size(); i < p.coeffs.size(); i++) {
        coeffs.push_back(p.coeffs[i]);
      }
      reduce();
    }
    fraction evaluate(const fraction& x) const {
      fraction r(0), pow(1);
      for (const fraction& c : coeffs) {
        fraction term = c; // r += c^pow
        term.mul(pow);
        r.add(term);
        pow.mul(x);
      }
      return r;
    }
  private:
    std::vector<fraction> coeffs;

    void reduce() {
      if (coeffs.empty()) {
        // ensure coefficient of degree 0 equal to 0
        coeffs.push_back({ 0, 1 }); 
      }
      else {
        while (coeffs.size() > 1 && coeffs.back().numerator() == 0) {
          coeffs.pop_back();
        }
      }
    }
    friend std::ostream& operator<<(std::ostream& os, const polynomial& p);
  };

  std::ostream& operator<<(std::ostream& out, const polynomial& p) {
    out << p.coeffs.at(0);
    for (size_t i = 1; i < p.coeffs.size(); i++) {
      const fraction& f = p.coeffs.at(i);
      if (f.numerator() > 0) {
        out << "+" << f  << " x^" << i;;
      } else if (f.numerator() < 0) {
        out  << f  << " x^" << i;
      }
    }
    return out;
  }

}
