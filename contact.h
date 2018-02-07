#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{

protected:

    int index{-1};

    std::string name{"Name"};
    std::string phone_number{"+48 222-333-444"};
    std::string address{"City"};

public:

    Contact();

    virtual void review(int id) = 0;

    virtual void head() = 0;                // Head + pierwsze 5 rekodów
    virtual void tail() = 0;                // Head + osatnie 5 rekordów
    virtual void sort_by(int column) = 0;   // Sortowanie po wybranej kolumnie
};

#endif // CONTACT_H
