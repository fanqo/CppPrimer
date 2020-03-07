#include <iostream>
using std::cout;
using std::endl;

#include "Sales_data.h"

int main()
{
    Sales_data sd1;
    print(cout, sd1);
    cout << endl;

    Sales_data sd2("0-201-78342-X");
    print(cout, sd2);
    cout << endl;

    Sales_data sd3("0-201-78343-X", 3, 20);
    print(cout, sd3);
    cout << endl;

    Sales_data sd4(std::cin);
    print(cout, sd4);
    cout << endl;

    return 0;
}
