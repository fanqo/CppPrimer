#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i1 = 2, i2 = 3;
    auto sum = [i1](const int &i){return i1 + i;};
    cout << "sum of " << i1 << " and " << i2
         << " is: " << sum(i2) << endl;
    
    return 0;
}

