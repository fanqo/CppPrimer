#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const char *cp = "Hello World";
    if (cp && *cp)
        cout << cp << " " << *cp << endl;

    return 0;
}
