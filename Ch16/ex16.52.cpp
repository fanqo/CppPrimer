#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

template<typename T, typename...Args>
void foo(const T &t, const Args& ... rest) {
    std::cout << sizeof...(Args) << std::endl;
    std::cout << sizeof...(rest) << std::endl;
}

int main()
{
    int i = 0; double d = 3.14; string s = "how now brown cow";
    cout << "foo(i, s, 42, d)" << endl ;
    foo(i, s, 42, d);

    cout << "foo(s, 42, \"hi\")" << endl;
    foo(s, 42, "hi");

    cout << "foo(d, s)" << endl;
    foo(d, s);

    cout << "foo(\"hi\")" << endl;
    foo("hi");

    return 0;
}

