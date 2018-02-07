#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <algorithm>
#include <tuple>

#include "contact.h"


class Person : public Contact
{
    std::string first_name;
    std::string last_name;

    static std::vector<Person> sheet;

public:
    Person();
    Person(const Person &r);
    ~Person();
    Person & operator =(const Person &k);

    void newContatc(const std::string v_name, const std::string v_phonen, const std::string v_address, const std::string f_name, const std::string l_name);

    virtual void review(int id) override;
    virtual void head() override;
    virtual void tail() override;
    virtual void sort_by(int column) override;

private:

    friend bool operator <(Person const &l, Person const &r);
};

bool operator <(Person const &l, Person const &r);

#endif // PERSON_H
