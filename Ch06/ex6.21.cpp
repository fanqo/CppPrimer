#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int bigger(const int i, const int *ip)
{
    if (i < *ip)
        return *ip;
    else 
        return i;
}

int main()
{
    cout << "Enter two integers: " << endl;
    int i1, i2;
    cin >> i1 >> i2;
    int *ip;
    ip = &i2;
    cout << "The bigger of " << i1 << " and " << i2
         << " is " << bigger(i1, ip) << endl;

    return 0;
}
