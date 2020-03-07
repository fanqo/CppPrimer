#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter two integers: " << endl;
    int ival1, ival2;
    cin >> ival1 >> ival2;

    if (ival1 != ival2)
        // ival1 = ival2
        ival1 = ival2;
    else ival1 = ival2 = 0;

    cout << ival1 << ", " << ival2 << endl;

    return 0;
}
