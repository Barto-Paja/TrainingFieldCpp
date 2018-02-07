#include "person.h"

std::vector<Person> Person::sheet;

Person::Person()
{

}

Person::Person(const Person &r)
{
    name = r.name;
    phone_number = r.phone_number;
    address = r.address;

    first_name = r.first_name;
    last_name = r.last_name;

    index = r.index;
}

Person::~Person()
{

}

Person &Person::operator =(const Person &k)
{
    if(this==&k)
    {
        return *this;
    }

    name = k.name;
    phone_number = k.phone_number;
    address = k.address;

    first_name = k.first_name;
    last_name = k.last_name;

    index = k.index;

    return *this;
}

void Person::newContatc(const std::string v_name, const std::string v_phonen, const std::string v_address, const std::string f_name, const std::string l_name)
{

    Person *temp_p = new Person;

    temp_p->name = v_name;
    temp_p->phone_number = v_phonen;
    temp_p->address = v_address;
    temp_p->first_name = f_name;
    temp_p->last_name = l_name;

    temp_p->index = sheet.size();

    sheet.push_back(*temp_p);
}

void Person::review(int id)
{
    std::cout << sheet.at(id).index << " | " << sheet.at(id).phone_number << " | " << sheet.at(id).address << " | "
              << sheet.at(id).first_name << " | " << sheet.at(id).last_name << std::endl;

}

void Person::head()
{
    int i=0;
    while(i<5)
    {
        std::cout << sheet.at(i).index << " | " << sheet.at(i).phone_number << " | " << sheet.at(i).address << " | "
                  << sheet.at(i).first_name << " | " << sheet.at(i).last_name << std::endl;
        i++;
    }

}

void Person::tail()
{
    int size = sheet.size()-1;

    int i=0;
    while(i<5)
    {
        std::cout << sheet.at(size-i).index << " | " << sheet.at(size-i).phone_number << " | " << sheet.at(size-i).address << " | "
                  << sheet.at(size-i).first_name << " | " << sheet.at(size-i).last_name << std::endl;
        i++;
    }
}

void Person::sort_by(int column)
{    
    sort(sheet.begin(),sheet.end(),[column](const Person& l, const Person& r)->bool {
        switch (column) {
        case 0:
            return r.index < l.index;
            break;
        case 1:
            return r.name < l.name;
            break;
        case 2:
            return r.first_name < l.first_name;
            break;
        case 3:
            return r.phone_number < l.phone_number;
            break;
        case 4:
            return r.address < l.address;
            break;
        case 5:
            return r.last_name < l.last_name;
        default:
            return std::tie(l.index,l.name,l.phone_number,l.address,l.last_name,l.first_name) <
                   std::tie(r.index,r.name,r.phone_number,r.address,r.last_name,r.first_name);
            break;
        }
    });
}

bool operator <(const Person &l, const Person &r)
{
        return std::tie(l.index,l.name,l.phone_number,l.address,l.last_name,l.first_name) <
               std::tie(r.index,r.name,r.phone_number,r.address,r.last_name,r.first_name);

}
