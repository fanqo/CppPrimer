#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s;  // s is empty, has no 0 index 
    cout << s.size() << endl;
    cout << s[0] << endl;  // strangely, it works

    return 0;
}
