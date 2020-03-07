#include <string>
using std::string;

int main()
{
    string s1 = "hello", s2 = "world";

    string s4 = s1 + ", ";
    // string s5 = "hello" + ", ";  // + should have a string on either side
    string s6 = s1 + ", " + "world";
    // string s7 = "hello" + ", " + s2;

    return 0;
}
