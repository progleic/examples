#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    vector<int> c {  10, 20, 30, 40, 50, 60 };
    cout << "1\n";
    for (int v : c) { cout << v << '\n'; }
    c.erase(c.begin() + 2);
    cout << "2\n";
    for (int v : c) { cout << v << '\n'; }
    c.insert(c.end() - 2, 123);
    cout << "3\n";
    for (int v : c) { cout << v << '\n'; }

    return 0;
}
