#include "company.h"

Company::Company()
{

}

void Company::newContact(const std::string v_name, const std::string v_phonen, const std::string v_address, const std::string c_name, const std::string c_id)
{
    name = v_name;
    phone_number = v_phonen;
    address = v_address;

    company_name = c_name;
    company_id = c_id;

}
