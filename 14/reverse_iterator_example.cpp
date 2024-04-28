#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    vector<char> c { 'R', 'O', 'M', 'A' };   
    for( auto itr = c.rbegin(); 
       itr != c.rend();
       itr++) {
        cout << *itr;
    }
    cout << '\n';
    return 0;
}
