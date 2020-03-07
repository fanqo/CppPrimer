#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>
using std::strcat;
using std::strcpy;
using std::strlen;

#include <cstddef>
using std::size_t;

int main()
{
    const char ca1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    const char ca2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
    const size_t sz = strlen(ca1) + strlen(ca2) + 1;
    char ca3[sz];
    strcpy(ca3, ca1);
    strcat(ca3, ca2);

    for (auto i : ca3)
        cout << i;
    cout << endl;

    return 0;
}
