#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i; double d;
    d = i = 3.5;
    cout << "d = i = 3.5: " << "i, " << i 
         << "; d, " << d << endl;
    
    i = d = 3.5;
    cout << "d = i = 3.5: " << "i, " << i 
         << "; d, " << d << endl;

    return 0;
}
