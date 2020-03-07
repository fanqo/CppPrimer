#include <iostream>
using std::cin;
using std::cout;
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

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    cout << s << endl;
    
    return 0;
}
