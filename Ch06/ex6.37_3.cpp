#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

auto rtv() -> string (&) [10]
{
    static string s[10] 
          = {"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s0"};
    return s;
}

int main()
{
    string (&s1)[10] = rtv();
    for (auto s : s1)
        cout << s << " "; 
    cout << endl;

    s1[3] = "a3";
    string (&s2)[10] = rtv();
    for (auto s : s2)
        cout << s << " ";
    cout << endl;

    return 0;
}
