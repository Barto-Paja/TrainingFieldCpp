#include <iostream>
#include <contacts.h>
#include <person.h>
#include <string>


using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Person test;
    Person test2(1,"test","test","test","test","test");

//    test.newContatc("Test","Test","Test","Test","Test");

//    test.review(0);

    cout << test.myNameIs() << endl;
    cout << test2.myNameIs() << endl;

    return 0;
}
