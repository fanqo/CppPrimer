#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int ab(int val)
{
    if (val < 0)
        return -val;
    else
        return val;
}

int main()
{
    cout << "Enter an integer: " << endl;
    int i;
    cin >> i;
    cout << "Absolute value of " << i << " is " << ab(i) << endl;

    return 0;
}
