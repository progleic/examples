
#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    std::vector<int> c {  1, 2, 3, 4, 5 };
    // Standard iterator
    for(auto itr = c.begin();
        itr != c.end();
        itr++) {
        *itr = *itr + 1;
    }
    // Reverse iterator
    for(auto itr = c.rbegin();
        itr != c.rend();
        itr++) {
        std::cout << *itr << std::endl;
    }
    return 0;
}
