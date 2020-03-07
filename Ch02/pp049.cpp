#include <iostream>

// var in function should not have the same name of global var
int reused = 42;  // global var

int main()
{
    int unique = 0;  // in block scope
    std::cout << "reused unique" << std::endl;
    std::cout << reused << " " << unique << std::endl;
    
    std::cout << std::endl;
    int reused = 0;  // override global `reused`
    std::cout << "\tint reused = 0" << std::endl;
    std::cout << reused << " " << unique << std::endl;

    std::cout << std::endl;
    std::cout << "::reused unique" << std::endl;
    std::cout << ::reused << " " << unique << std::endl;

    return 0;
}


