#include <map>
#include <unordered_map>
#include <iostream>

int main() {
    std::unordered_map<std::string, int> m {
            { "b", 2},
            { "a", 1},
            { "x", 3},
            { "h", 4}
    };

    for (auto itr = m.begin();
         itr != m.end();
         itr++) {
        std::cout << (*itr).first << " --> "
                  << (*itr).second << std::endl;
    }
    return 0;
}