#include <iostream>

int main()
{
    int i = 3;
    int *pi = &i;
    
    std::cout << i << " " << pi << std::endl;

    int j = 5;
    pi = &j;
    *pi = i;
    std::cout << j << " " << pi << std::endl;

    return 0;
}

    
