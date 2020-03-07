#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::ispunct;

int main()
{
    cout << "Enter strings with punctuations: " << endl;
    string s, s2;
    cin >> s;

    for (auto &c : s)
        if (!ispunct(c))
            s2 += c;

    cout << s2 << endl;

    return 0;
}
