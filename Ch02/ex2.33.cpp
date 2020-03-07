#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;  // a is an int, not a reference

    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int
    auto c = cr;  // c is an int
    auto d = &i;  // d is a pointer to int
    auto e = &ci; // e is a pointer to const int

    const auto f = ci;  // f is a const int

    auto &g = ci;  // g is a reference to const int

    std::cout << "a = " << a << ", "
              << "b = " << b << ", "
              << "c = " << c << ", "
              << "d = " << d << ", "
              << "e = " << e << ", "
              << "f = " << f << ", "
              << "g = " << g << ", "
              << "i = " << i << std::endl;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;
    *d = 42;
    // e = 42;
    // f = 42;
    // g = 42;
   
    std::cout << "a = " << a << ", "
              << "b = " << b << ", "
              << "c = " << c << ", "
              << "d = " << d << ", "
              << "e = " << e << ", "
              << "f = " << f << ", "
              << "g = " << g << ", "
              << "i = " << i << std::endl;

    return 0;
}
