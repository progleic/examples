#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void print(const T& container) {
    std::cout << "[";
    for (auto v: container) {
        std::cout << ' ' << v ;
    }
    std::cout << " ]" << std::endl;
}

bool increasing_order(int a, int b) {
    return a < b;
}
bool decreasing_order(int a, int b) {
    return a > b;
}

int main() {
    std::vector<int> vec { 1, 7, 3, -1, 9, 1, 10 };

    // Ordenação por ordem crescente
    std::sort(vec.begin(), vec.end());
    print(vec);

    // Ordenação por ordem decrescente
    std::sort(vec.begin(), vec.end(), decreasing_order);
    print(vec);

    // Ordenação por ordem crescente (de novo).
    std::sort(vec.begin(), vec.end(), increasing_order);
    print(vec);

    return 0;
}