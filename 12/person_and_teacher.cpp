#include <string>
#include <iostream>

// Class declarations
class person
{
private:
    int pid;
    std::string pname;

public:
    person(int id, const std::string &name);
    person(const person &p);
    int id() const;
    const std::string &name() const;
    /* virtual */ void print(std::ostream &out) const;
};

class teacher : public person
{
private:
    std::string tdepartment;

public:
    teacher(int id, const std::string &name,
            const std::string &dept);
    teacher(const teacher &t);
    const std::string &department() const;
    void print(std::ostream &out) const /* override */;
};

// Implementation
person::person(int id, const std::string &name) : pid(id), pname(name)
{
}
teacher::teacher(int id, const std::string &name, const std::string &dept)
    : person(id, name), tdepartment(dept)
{
}
person::person(const person &p) : pid(p.pid), pname(p.pname)
{
}
teacher::teacher(const teacher &t) : person(t), tdepartment(t.tdepartment)
{
}
int person::id() const
{
    return pid;
}
const std::string &person::name() const
{
    return pname;
}
const std::string &teacher::department() const
{
    return tdepartment;
}

void person::print(std::ostream &out) const
{
    out << "ID: " << pid << std::endl
        << "Name: " << pname << std::endl;
}
void teacher::print(std::ostream &out) const
{
    person::print(out);
    out << "Department: " << tdepartment << std::endl;
}

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