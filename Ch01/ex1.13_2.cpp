#include <iostream>

int main()
{
    std::cout << "Integers from 10 to 0 are: ";

    for (int i = 10; i >= 0; --i)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
