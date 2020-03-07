#include <iostream>

int main()
{
    int i = 3;
    int *p1 = &i;
    
    // long *p2 = &i;
    int *p2;

    // if p2 is illegal, it cannot be compared with p1
    // compiler can catch illegal pointer ?
    std::cout << (p1 == p2) << std::endl;  

    return 0;
}
    
