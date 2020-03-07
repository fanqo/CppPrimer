#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

string::size_type find_char(const string &s, char c, 
                            string::size_type &occurs)
{
    auto ret = s.size();   // size of s, if s do not contain c
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size())
                ret = i;

            ++occurs;
        }
    }

    return ret;
}

int main()
{
    cout << "Enter string and the char to be found: " << endl;
    string s;
    char c;
    cin >> s >> c;

    string::size_type ctr = 0;
    auto index = find_char(s, c, ctr);

    cout << c << " occurs " << ctr << " times in string " << s
         << ", the first occuring index is " << index << endl;

    return 0;
}
