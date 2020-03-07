#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::toupper;
using std::isspace;

int main()
{
    string s ("some thing");
    cout << s << endl;

    if (!s.empty())
        s[0] = toupper(s[0]);

    cout << s << endl;

    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);

    cout << s << endl;

    return 0;
}
