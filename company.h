#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>

class Company : public Contact
{
    std::string company_name;
    std::string company_id;

public:
    Company();  
};

#endif // COMPANY_H
