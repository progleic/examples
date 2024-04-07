#include "polynomial.hpp"

namespace leic {
  polynomial::polynomial(const std::vector<fraction>& c) : coeffs(c) {
    reduce();
  }    

  polynomial::~polynomial() { }

  int polynomial::degree() const {
    return coeffs.size() - 1;
  }

  void polynomial::add(const polynomial& p) {
    size_t n = std::min(coeffs.size(), p.coeffs.size());
    for (size_t i = 0; i < n; i++) {
      coeffs[i].add(p.coeffs[i]);
    }
    for (size_t i = coeffs.size(); i < p.coeffs.size(); i++) {
      coeffs.push_back(p.coeffs[i]);
    }
    reduce();
  }
    
  fraction polynomial::evaluate(const fraction& x) const {
    fraction r(0), pow(1);
    for (const fraction& c : coeffs) {
      fraction term = c; 
      term.mul(pow);
      r.add(term);
      pow.mul(x);
    }
    return r;
  }

  void polynomial::reduce() {
    if (coeffs.empty()) {
      // ensure coefficient of degree 0 equal to 0
      coeffs.push_back({ 0, 1 }); 
    } else {
      while (coeffs.size() > 1 && coeffs.back().numerator() == 0) {
        coeffs.pop_back();
      }
    }
  }
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
