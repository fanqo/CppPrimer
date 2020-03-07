#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    cout << "Enter strings: " << endl;
    string curString, s;
    bool hasSuc = false;
    if (cin >> curString) {
        while(cin >> s) {
            if (curString == s) {
                hasSuc = true;
                cout << "Succesive string is: " << s << endl;
                break;  // break while
            } else 
                curString = s;
        }
        if (!hasSuc)
            cout << "No succesive strings" << endl;
    }

    return 0;
}

