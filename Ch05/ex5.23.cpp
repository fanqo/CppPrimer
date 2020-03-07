#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter two integers: " << endl;
    int i1 = 0, i2 = 0;
    cin >> i1 >> i2;

    cout << i1 << " divided by " << i2 << " is: "
         << i1 / i2 << endl;

    return 0;
}
