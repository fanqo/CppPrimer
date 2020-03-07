#include <iostream>

int main()
{
    int sum = 0;

    // addition from 1 to 10
    for (int val = 1; val <= 10; ++val)  // (init-statement; condition; expression)
        sum += val;

    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;

    return 0;
}
