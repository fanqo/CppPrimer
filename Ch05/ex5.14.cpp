#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    unsigned num = 1, numMax = 1;
    string curString, s, maxString;
    if (cin >> curString) {
        while (cin >> s) {
            if (curString == s)
                ++num;
            else {
                curString = s;
                num = 1;
            }

            if (numMax < num) {
                numMax = num;
                maxString = curString;
            }
        }

        if (numMax < 2)
            cout << "No succesive word occurs." << endl;
        else
            cout << "String: " << maxString << ", occurs " 
                 << numMax << " times." << endl;
    }

    return 0;
}

