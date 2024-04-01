#include "polynomial.hpp"

using namespace std;
using namespace leic;

int main(void) {
    // 2 + 3 x^1 + 1/3 x^2
    polynomial a { {2, 3, {1, 3} } };
    // 1/3 + 2/3 x^1 + 0 x^2 - 1 x^3
    polynomial b ({ {1,3},
                   {2,3},
                   fraction::ZERO,
                   { -1 } });
    a.add(b);
    cout << a << '\n'
         << a.evaluate({ 2 }) << '\n'
         << b << '\n' 
         << b.evaluate({ 2 }) << '\n';
    return 0;
}

