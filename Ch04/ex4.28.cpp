#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Sizeof: " << endl;
    cout << '\t' << "bool: " << sizeof(bool) << endl;
    cout << '\t' << "char: " << sizeof(char) << endl;
    cout << '\t' << "signed char: " << sizeof(signed char) << endl;
    cout << '\t' << "unsigend char: " << sizeof(unsigned char) << endl;
    cout << '\t' << "wchar_t: " << sizeof(wchar_t) << endl;
    cout << '\t' << "char16_t: " << sizeof(char16_t) << endl;
    cout << '\t' << "char32_t: " << sizeof(char32_t) << endl;
    cout << '\t' << "short: " << sizeof(short) << endl;
    cout << '\t' << "unsigned short: " << sizeof(unsigned short) << endl;
    cout << '\t' << "int: " << sizeof(int) << endl;
    cout << '\t' << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << '\t' << "long: " << sizeof(long) << endl;
    cout << '\t' << "unsigned long: " << sizeof(unsigned long) << endl;
    cout << '\t' << "long long: " << sizeof(long long) << endl;
    cout << '\t' << "unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << '\t' << "float: " << sizeof(float) << endl;
    cout << '\t' << "double: " << sizeof(double) << endl;
    cout << '\t' << "long double: " << sizeof(long double) << endl;

    return 0;
}
