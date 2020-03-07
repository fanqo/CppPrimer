#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(int ac, char *av[])
{
    if (3 == ac) {
        string s = static_cast<string>(av[1]) + static_cast<string>(av[2]);
        cout << s << endl;
    } else
        cout << av[0] << " needs two arguments" << endl;

    return 0;
}
