#include <iostream>
using std::cout;
using std::endl;

void swapip(const int * ap[2])
{
    const int *ip = ap[0];
    ap[0] = ap[1];
    ap[1] = ip;
}

int main()
{
    int i1 = 2, i2 = 3;
    const int * ap[2];
    ap[0] = &i1;
    ap[1] = &i2;
    cout << *ap[0] << ", " << *ap[1];
    swapip(ap);
    cout << " after swap are: " << *ap[0] 
         << ", " << *ap[1] << endl;

    return 0;
}

