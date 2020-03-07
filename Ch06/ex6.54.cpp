#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int sum(int i1, int i2)
{
    return i1 + i2;
}

// using FUN = int (*)(int, int);
// typedef int (*FUN) (int, int);
typedef decltype(sum) *FUN;

int main()
{
    int i1 = 2, i2 = 3;
    vector<FUN> fv {sum};
    cout << fv[0](2, 3) << endl;

    return 0;
}
