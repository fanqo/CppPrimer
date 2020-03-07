#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> v1 {0, 1, 1, 3};
    vector<int> v2 {0, 1, 1, 2, 3, 5, 8};

    auto sv = v1, lv = v2;

    if (v1.size() > v2.size()) {
        auto &sv = v2;
        auto &lv = v1;
    }

    int i = 0;
    for (; i < sv.size() && lv[i] == sv[i]; ++i);

    if (i == sv.size()) 
        cout << "the shorter vector is prefix of the longer" << endl;
    else
        cout << "the shorter vector is not prefix of the longer" << endl;

    for (auto i : sv)
        cout << i << " ";
    cout << endl;

    for (auto i : lv)
        cout << i << " ";
    cout << endl;

    return 0;
}


