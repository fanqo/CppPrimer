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

    int i = 0;
    while (i < s.size()) {
        s[i] = 'X';
        ++i;
    }

    cout << s << endl;

    return 0;
}
