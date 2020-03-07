#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

#include "HasPtr.h"

int main()
{
    HasPtr hp1("hp1");
    HasPtr hp2("hp2", 5);
    HasPtr hp3("hp3", 3);

    vector<HasPtr> hpv {hp1, hp3, hp2};

    for (auto i : hpv)
        print(cout, i) << endl;
    cout << endl;

    sort(hpv.begin(), hpv.end());
    for (auto i : hpv)
        print(cout, i) << endl;

    return 0;
}

