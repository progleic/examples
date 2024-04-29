#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> m;
    m.insert({"a",1});
    m.insert(pair<string,int>("b", 2));
    m.insert({"a",3});
    m.at("a") ++;
    m.erase("b");
    m["c"] = 4;
    m["c"] += m["a"];
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << (*itr).first << " --> "
                  << (*itr).second << '\n';
    }
    for (auto kv: m) {
        cout << kv.first << " --> "
                  << kv.second << '\n';
    }
    return 0;
}