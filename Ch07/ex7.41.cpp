#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "ex7.41.h"

int main()
{
    int n = 10;
    Sales_data sd1;
    cout << string(n, '#') << endl;

    Sales_data sd2("string");
    cout << string(n, '#') << endl;

    Sales_data sd3(cin);
    cout << string(n, '#') << endl;

    return 0;
}
