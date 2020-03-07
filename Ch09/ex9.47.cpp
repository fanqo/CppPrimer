#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    const string s {"ab2c3d7R4E6"};
    const string numbers {"1234567890"};
    const string alphas 
          {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

    string::size_type pos = 0;
    while ((pos = s.find_first_of(numbers, pos))
                  != string::npos) {
        cout << "found number at index: " << pos
             << " element is " << s[pos] << endl;
        ++pos;
    }

    pos = 0;
    while ((pos = s.find_first_of(alphas, pos))
                  != string::npos) {
        cout << "found alphaBeta at index: " << pos
             << " element is " << s[pos] << endl;
        ++pos;
    }

    pos = 0;
    while ((pos = s.find_first_not_of(alphas, pos))
                != string::npos) {
        cout << "found number at index: " << pos
             << " element is " << s[pos] << endl;
        ++pos;
    }

    pos = 0;
    while ((pos = s.find_first_not_of(numbers, pos))
                != string::npos) {
        cout << "found alphaBeta at index: " << pos
             << " element is " << s[pos] << endl;
        ++pos;
    }

    return 0;
}
