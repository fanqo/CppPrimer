#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "Integers from " << v1 << " to " << v2 << " are: ";
    for (int i = v1; i <= v2; ++i)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
