#include <map>
#include <iostream>

int main() {
    std::multimap<int,int> ms;
    for (int i = 1; i <=3; i++)
        for (int j = 1; j <= i; j++)
            ms.insert({i, i * 10 + j});
    for (auto v : ms)
        std::cout << v.first << " --> "
                  << v.second <<  " (count: "
                  << ms.count(v.first) << ")"
                  << std::endl;
    return 0;
}