#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::toupper;

int main()
{
    string s ("Hello world!!!");

    for (auto &c : s)  // reference
        c = toupper(c);
    
    cout << s << endl;

    return 0;
}
