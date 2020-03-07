#include <iostream>

int main()
{
    // std::cout << "/*";  // works
    // std::cout << "*/";  // works
    // std::cout << /* "*/" */;  // doesn't work, comment the first " out
    std::cout << /* "*/" /* "/*" */; // works, the first and the last " are commented out
    return 0;
}
