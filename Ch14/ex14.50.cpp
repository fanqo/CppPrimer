#include <iostream>

struct LongDouble {
    LongDouble(double  = 0.0) { }
    operator double () { std::cout << "double ()" << std::endl; }
    operator float () { std::cout << "float ()" << std::endl; }
};

int main()
{
    LongDouble ldObj;
    // int ex1 = ldObj;
    float ex2 = ldObj;
    double ex1 = ldObj;

    return 0;
}
