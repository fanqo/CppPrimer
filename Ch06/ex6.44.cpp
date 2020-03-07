#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << "Enter two strings: " << endl;
    string s1, s2;
    cin >> s1 >> s2;

    if (isShorter(s1, s2))
        cout << s1 << " is shorter than " << s2 << endl;
    else if (isShorter(s2, s1))
        cout << s2 << " is shorter than " << s1 << endl;
    else
        cout << s1 << " and " << s2 << " have the same length" << endl;

    return 0;
}
