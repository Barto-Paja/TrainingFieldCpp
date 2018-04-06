#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>

class Contacts
{

protected:

    int index;

    std::string name;
    std::string phone_number;
    std::string address;

public:
    Contacts(int index=-1);
    Contacts(int arg1,std::string arg2,std::string arg3,std::string arg4):
        index{arg1},name{arg2},phone_number{arg3},address{arg4}{}

    virtual void review(int id) = 0;
    virtual void head() = 0;    // Head + pierwsze 5 rekodów
    virtual void tail() = 0;    // Head + osatnie 5 rekordów
    virtual void sort_by(int column) = 0; // Sortowanie po wybranej kolumnie

    virtual ~Contacts(){}
};

#endif // CONTACTS_H
