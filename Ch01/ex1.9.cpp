#include <iostream>

int main()
{
    int sum = 0, val = 50;

    // while loop runs if val <= 100
    while (val <= 100) {
        sum += val;  // sum = sum + val
        ++val;  // val = val + 1
    }
    std::cout << "Sum of 50 to 100 inclusive is "
        << sum << std::endl;
    return 0;
}
