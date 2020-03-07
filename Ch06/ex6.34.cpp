#include <iostream>
using std::cout;
using std::endl;

int factorial(int val)
{
    if (val != 0)
        return factorial(val - 1) * val;

    return 1;
}

int main()
{
    cout << factorial(5) << endl;

    return 0;
}
