
#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char** argv) {
    deque<string> dq {"a", "b", "c", "d", "e"};
    dq.push_back("f"); 
    dq.push_front("g"); 
    cout << dq.size() << " [";
    for (size_t i = 0; i < dq.size(); i++) {
        cout << ' ' << dq.at(i);
    }
    cout << " ]\n";

    return 0;
}
