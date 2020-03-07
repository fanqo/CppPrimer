#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstddef>
using std::begin;
using std::end;

int main()
{
    int a[11] = {};
    for (int i : a)
        cout << i << " ";
    cout << endl;

    auto aend = end(a);
    for (auto beg = begin(a); beg != aend; ++beg)
        *beg = 0;
    for (int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}
    

