#include "persons.hpp"


person::person(int id, const std::string &name) : pid(id), pname(name)
{
}

person::person(const person &p) : pid(p.pid), pname(p.pname)
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


void person::print(std::ostream &out) const
{
    out << "ID: " << pid << std::endl
        << "Name: " << pname << std::endl;
}

teacher::teacher(int id, const std::string &name, const std::string &dept)
    : person(id, name), tdepartment(dept)
{
}


teacher::teacher(const teacher &t) : person(t), tdepartment(t.tdepartment)
{
}

const std::string &teacher::department() const
{
    return tdepartment;
}

void teacher::print(std::ostream &out) const
{
    person::print(out);
    out << "Department: " << tdepartment << std::endl;
}
