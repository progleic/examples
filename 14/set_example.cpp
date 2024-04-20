#include <set>

#include <iostream>

int main() {
    std::set<int> s; // ou std::unordered_set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.erase(2);
    for (int i = 0; i <= 3; i++)
        if (s.find(i) != s.end())
            std::cout << i << " is in the set" << std::endl;
        else
            std::cout << i << " is not in the set" << std::endl;
    return 0;
}