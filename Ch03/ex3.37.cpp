#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;  // &ca[0]
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
    
    return 0;
}
