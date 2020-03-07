#include <iostream>
using std::istream;
using std::ostream;

#include "Person.h"

istream &read(istream &is, Person &p)
{
    is >> pName >> pAddress;

    return is;
}

ostream &print(ostream &os, const Person &p)
{
    os << pName <<" : " << pAddress;

    return os;
}

Person::Person(istream &is)
{
    read(is, *this);
}
