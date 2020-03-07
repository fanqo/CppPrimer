#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i1 = 2, i2 = 3;
    auto sum = [](const int &i1, const int &i2) {return i1 + i2;};
    cout << "sum of " << i1 << " and " << i2
         << " is: " << sum(i1, i2) << endl;
    
    return 0;
}

