#include <iostream>
using std::cout;
using std::endl;

#include "HasPtr.h"

int main()
{
    HasPtr hp1("hp1");
    HasPtr hp2("hp2", 3);

    cout << "hp1: ";
    print(cout, hp1) << endl;
    cout << "hp2: ";
    print(cout, hp2) << endl;

    swap(hp1, hp2);

    cout << "hp1: ";
    print(cout, hp1) << endl;
    cout << "hp2: ";
    print(cout, hp2) << endl;

    return 0;
}

