#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << "Unsigned: " << std::endl;
    std::cout << u2 << " - " << u 
        << " = " << u2 - u << std::endl;
    std::cout << u << " - " << u2
        << " = " << u - u2 << std::endl;

    std::cout << std::endl;
    int i = 10, i2 = 42;
    std::cout << "Int: " << std::endl;
    std::cout << i2 << " - " << i
        << " = " << i2 - i << std::endl;
    std::cout << i << " - " << i2
        << " = " << i - i2 << std::endl;

    std::cout << std::endl;
    std::cout << i << " - u" << u
        << " = " << i - u << std::endl;
    std::cout << "u" << u << " - " << i
        << " = " << u - i << std::endl;

    return 0;
}
