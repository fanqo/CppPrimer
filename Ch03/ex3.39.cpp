#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cstring>
using std::strcmp;

int main()
{
    string s1 {"Hello"};
    string s2 {"hello"};

    if (s1 == s2)
        cout << "s1 is equal to s2" << endl;
    else if (s1 < s2)
        cout << "s1 is less than s2" << endl;
    else
        cout << "s1 is larger tha s2" << endl;

    const char ca1[] = {'h', 'e', 'l', 'l', 'o', '\0'};  // '\0' is needed
    const char ca2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    if (strcmp(ca1, ca2) == 0)
        cout << "ca1 is equal to ca2" << endl;
    else if (strcmp(ca1, ca2) < 0)
        cout << "ca1 is less than ca2" << endl;
    else 
        cout << "ca1 is larger than ca2" << endl;
    
    return 0;
}
