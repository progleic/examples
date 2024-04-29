#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    list<int> c {  2, 0, 1, 0, 2 };
    auto itr = c.begin();
    while (itr != c.end()) {
        if (*itr == 0) {
            itr = c.erase(itr);
        } else {
            itr++;
        }
    }
    // Implicit use of iterator
    for (int v : c) { 
        cout << v << '\n'; 
    }
    return 0;
}
