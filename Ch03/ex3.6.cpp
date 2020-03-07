#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s ("Hello World!");
    cout << s << endl;

    for (auto &c : s)
        c = 'X';

    cout << s << endl;

    return 0;
}
