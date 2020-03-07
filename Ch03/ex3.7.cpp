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

    for (char &c : s)  // reference is needed
        c = 'X';

    cout << s << endl;

    return 0;
}
