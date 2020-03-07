#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s = "word";
    // string p1 = s + s[s.size() -1] == 's' ? "" : "s";
    string p1 = s + (s[s.size() -1] == 's' ? "" : "s");
    cout << p1 << endl;

    return 0;
}
