#include <map>
#include <iostream>

int main() {
    std::map<std::string, int> m;
    m.insert({"a",1});
    m.insert(std::pair<std::string,int>("b", 2));
    m.insert({"a",3});
    m.at("a") ++;
    m.erase("b");
    m["c"] = 4;
    m["c"] += m["a"];
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        std::cout << (*itr).first << " --> "
                  << (*itr).second << std::endl;
    }
    for (auto kv: m) {
        std::cout << kv.first << " --> "
                  << kv.second << std::endl;
    }
    return 0;
}