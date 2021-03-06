#include <iostream>
using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int i)
{
    cout << "f(int): ";
    cout << "f(" << i << ")" << endl;
}

void f(int i1, int i2)
{
    cout << "f(int, int): ";
    cout << "f(" << i1 << ", " << i2 << ")" << endl;
}

void f(double d1, double d2= 3.14)
{
    cout << "f(double, double = 3.14): ";
    cout << "f(" << d1 << ", " << d2 << ")"  << endl;
}

int main()
{
    // f(2.56, 42);  // ambiguous call
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}

    
