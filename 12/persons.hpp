#ifndef __persons_hpp__
#define __persons_hpp__

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
#endif

