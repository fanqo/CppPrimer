#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "Integers between " << v1 
        << " and " << v2 << " are: ";
    while (v1 <= v2) {
        std::cout << v1 << " ";
        ++v1;
    }
    std::cout << std::endl;

    return 0;
}

