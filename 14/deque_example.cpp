
#include <iostream>
#include <deque>

int main(int argc, char** argv) {
    std::deque<std::string> dq {"a", "b", "c", "d", "e"};
    dq.push_back("f");  // emplace_back mais eficiente
    dq.push_front("g"); // emplace_front mais eficiente
    std::cout << dq.size() << " [";
    for (size_t i = 0; i < dq.size(); i++) {
        std::cout << ' ' << dq.at(i);
    }
    std::cout << " ]" << std::endl;

    return 0;
}
