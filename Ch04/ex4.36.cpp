#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 2;
    double d = 3.5;
    
    i *= d;
    cout << "i *=d: " << i << endl;

    i = 2;
    i *= static_cast<int>(d);
    cout << "i *= static_cast<int>(d): " << i << endl;
    
    return 0;
}
