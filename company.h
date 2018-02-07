#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>

#include <contact.h>

class Company : public Contact
{
    std::string company_name;
    std::string company_id;

public:
    Company();

    void newContact(const std::string v_name, const std::string v_phonen, const std::string v_address, const std::string c_name, const std::string c_id);
};

#endif // COMPANY_H
