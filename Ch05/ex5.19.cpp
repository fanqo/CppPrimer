#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s1, s2, rsp;
    do {
        cout << "please enter two strings: " << endl;
        cin >> s1 >> s2;
        cout << "The short string is: ";
        if (s1.size() > s2.size())
            cout << s2;
        else
            cout << s1;
        cout << endl;

        cout << "Continue? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');

    return 0;
}

