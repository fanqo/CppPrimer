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

     for (int i = 0; i < s.size(); ++i) {
        s[i] = 'X';
    }

    cout << s << endl;

    return 0;
}
