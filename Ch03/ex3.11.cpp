#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s) { 
        // c = 'x';  // c is const char
        cout << c;
    }
    cout << s << endl;

    return 0;
}
