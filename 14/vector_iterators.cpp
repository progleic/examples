#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    vector<int> c {  1, 2, 3, 4, 5 };
    // Standard iterator
    for(auto itr = c.begin();
        itr != c.end();
        itr++) {
        *itr = *itr + 1;
    }
    for (int& v : c) {
        v++;
    }
    // Reverse iterator
    for(auto itr = c.rbegin();
        itr != c.rend();
        itr++) {
        cout << *itr << '\n';
    }
    return 0;
}
