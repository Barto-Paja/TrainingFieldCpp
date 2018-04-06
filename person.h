#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <algorithm>
#include <tuple>

#include "contacts.h"


class Person : public Contacts
{
    std::string first_name;
    std::string last_name;

public:
    Person(): Contacts(), first_name{"F_name"},last_name{"L_Name"}{}
    Person(int arg1,std::string arg2,std::string arg3,std::string arg4,std::string arg5, std::string arg6):
        Contacts{arg1,arg2,arg3,arg4},first_name{arg5},last_name{arg6}{}
    ~Person();

    virtual void review(int id) override;
    virtual void head() override;    // Head + pierwsze 5 rekodów
    virtual void tail() override;    // Head + osatnie 5 rekordów
    virtual void sort_by(int column) override; // Sortowanie po wybranej kolumnie

    std::string myNameIs();

};

#endif // PERSON_H
