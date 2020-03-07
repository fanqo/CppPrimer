#include <iostream>

int main()
{
    // double sum = std::max(1, 2.0);
    double sum = std::max<double>(1, 2.0);
    std::cout << sum << std::endl;

    return 0;
}


