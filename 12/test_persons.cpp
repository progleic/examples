#include "persons.hpp"

int main(void)
{
    person p(123, "Joana Doa");
    std::cout << p.id() << ' '
              << p.name() << std::endl;

    teacher t(124, "John Doe", "Computer Science");
    std::cout << t.id() << ' '
              << t.name() << ' '
              << t.department()
              << std::endl;
    p.print(std::cout);
    t.print(std::cout);

    person &rt = t;
    person *pt = &t;

    // Comment / uncomment virtual in the definition of
    // person::print() to get different behaviors.
    rt.print(std::cout);
    pt->print(std::cout);
    
    return 0;
}