#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s, bs;
    while (cin >> s)
        bs += s;

    cout << bs << endl;

    return 0;
}
