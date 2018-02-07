#include <iostream>
#include <contact.h>
#include <person.h>
#include <string>


using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Person test;

    test.newContatc("Test","Test","Test","Test","Test");

    test.review(0);

    return 0;
}
