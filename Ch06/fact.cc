#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Chapter6.h"

void fact()
{
    cout << "Enter an integer: " << endl;
    int val;
    cin >> val;

    int ret = 1, v = val;
    while (v > 1)
        ret *= v--;

    cout << val << "! is " << ret << endl;
}
