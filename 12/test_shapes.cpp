
#include "shapes.hpp"

using namespace leic;

int main(void)
{
    drawing d;
    d.add_shape(new rectangle({3, 5}, 2, 5));
    d.add_shape(new circle({1, 1}, 1));
    d.add_shape(new triangle({1, 1}, {1, 2}, {2, 1}));

    for (shape *s : d.get_shapes())
    {
        std::cout << s->center() << ' ' << s->area() << std::endl;
    }
    return 0;
}
