#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;  // ul1 011, ul2 0111

    cout << "a: " << (ul1 & ul2) << endl;
    cout << "b: " << (ul1 | ul2) << endl;
    cout << "c: " << (ul1 && ul2) << endl;
    cout << "d: " << (ul1 || ul2) << endl;

    return 0;
}
