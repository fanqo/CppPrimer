#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#include <string>

#include "Sales_data.h"

int main()
{
    Sales_data total(cin);
    Sales_data trans;
    while (read(cin, trans)) {
        if (total.isbn() == trans.isbn())
            total.combine(trans);
        else {
            print(cout, total) << endl;
            total = trans;
        }
    }
    print(cout, total) << endl;

    return 0;
}
