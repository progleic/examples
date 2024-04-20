
#include <iostream>
#include <list>



class coord2d {
public:
    int x, y;
    coord2d(int x, int y) : x(x), y(y) { }
};

int main(void) {
    std::list<coord2d> list;
    list.push_back(coord2d(1,2));
    list.push_back({1,2});
    list.emplace_back(1,2);
    list.emplace_back(3,4);
    return 0;
}

