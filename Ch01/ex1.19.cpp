#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    int bigger = 0, smaller = 0;

    std::cout << "Enter two numbers: ";
    std::cin >> v1 >> v2;

    if (v1 > v2) {
        bigger = v1;
        smaller = v2;
    } else {
        bigger = v2;
        smaller = v1;
    }

    std::cout << "Integers from " << smaller 
        << " to " << bigger << " are: ";

    for (int i = smaller; i <= bigger; ++i)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}

