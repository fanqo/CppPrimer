#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter an integer: " << endl;
    int i;
    cin >> i;

    if (i % 2 == 0)
        cout << i << " is even" << endl;
    else
        cout << i << " is odd" << endl;

    return 0;
}

