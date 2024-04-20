#include <iostream>
#include <set>
#include <unordered_set>

template <typename T>
void print(const T& container) {
    std::cout << "{";
    for (auto v: container) std::cout << ' ' << v ;
    std::cout << " }" << std::endl;
}

int main() {
    std::set<std::string> a({ "fcup", "xyz", "prog", "feup", "leic" });
    std::unordered_set<std::string> b { "fcup", "xyz", "prog", "feup", "leic" };
    print(a);
    print(b);
    return 0;
}