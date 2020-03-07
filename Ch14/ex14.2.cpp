#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Sales_data.h"

int main()
{
    Sales_data item1(cin);
    Sales_data item2(cin);
    
    cout << item1 + item2 << endl;

    return 0;
}
