#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::toupper;

int main()
{
    string s ("some thing");
    cout << s << endl;

    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }

    cout << s << endl;
    
    return 0;
}
