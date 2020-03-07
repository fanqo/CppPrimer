#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <stdexcept>
using std::runtime_error;

int main()
{
    cout << "Enter two integers: " << endl;
    int i1 = 0, i2 = 0;
    cin >> i1 >> i2;

    if (i2 == 0)
        throw runtime_error("cannot be divided by 0");

    cout << i1 << " divided by " << i2 << " is: "
         << i1 / i2 << endl;

    return 0;
}
