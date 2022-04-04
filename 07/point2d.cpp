#include <iostream>

template <typename T>
struct point2d {
    T x;
    T y;
};

template <typename T>
point2d<T> midpoint(const point2d<T> arr[], int n) {
    point2d<T> m = { 0, 0 };
    for (int i = 0; i < n; i++) {
        m.x += arr[i].x;
        m.y += arr[i].y;
    }
    m.x = m.x / n;
    m.y = m.y / n;
    return m;
}

template <typename T>
point2d<T> mul(T f, const point2d<T>& a) {
    return { f* a.x, f * a.y };
}


int main(void) {
    point2d<int> ipoint = { 1, 2 };
    point2d<double> dpoint = { 1.5, -1.3};
    ipoint = mul(2, ipoint);
    dpoint = mul(2.5, dpoint);

    point2d<int> ipa[4] = { {1, 2},
                           {2,4},
                           {3,6},
                           {4, 8}};
    point2d<int> imid = midpoint(ipa, 4);
    std::cout << imid.x << ' ' << imid.y << std::endl;

    point2d<double> dpa[4] = { {  1.5,  2.5 },
                             { -2.5,  4.2 },
                             {  3.1, -6.3 },
                             {  4.1,  8.2 } };
    point2d<double> dmid = midpoint(dpa, 4);
    std::cout << dmid.x << ' ' << dmid.y << std::endl;
    return 0;
}
