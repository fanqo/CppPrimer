#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(int argc, char **argv)
{
    for (size_t i = 0; i != argc; ++i)
        cout << "argc[" << i << "] = "
             << static_cast<string>(argv[i]) << endl;

    return 0;
}
    
