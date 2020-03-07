#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s1, s2;

    cout << "Enter two strings" << endl;
    cin >> s1 >> s2;

    if (s1 == s2) 
        cout << s1 << " is equal to " << s2 << endl;
    else {
        if (s1 > s2)
            cout << "The larger is " << s1 << endl;
        else
            cout << "The larger is " << s2 << endl;
    }

    return 0;
}

