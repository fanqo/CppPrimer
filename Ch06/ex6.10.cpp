#include <iostream>
using std::cout;
using std::endl;

void swap(int *i1, int *i2)
{
    int tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

int main()
{
    int i1 = 2, i2 = 3;
    cout << i1 << ", " << i2;

    swap(&i1, &i2);
    cout << " after swap: " 
         << i1 << ", " << i2 << endl;

    return 0;
}
