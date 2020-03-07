#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <utility>
using std::pair;

int main()
{
    map<int, int> mii {pair<int, int> {3, 1}};
    for (auto index : mii)
        cout << index.first << ", "
             << index.second << endl;

    auto beg = mii.begin();
    beg->second = 2;
    for (auto index : mii)
        cout << index.first << ", "
             << index.second << endl;

    return 0;
}

