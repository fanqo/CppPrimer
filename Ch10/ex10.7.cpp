#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <algorithm>
using std::copy;

int main()
{
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);

    vec.resize(lst.size());

    copy(lst.cbegin(), lst.cend(), vec.begin());

    for (auto i : vec)
        cout << i << " ";
    cout << endl;

    vector<int> vec2;
    // vec2.reserve(10);
    vec2.resize(10);
    fill_n(vec2.begin(), 10, 0);
    for (auto i : vec2)
        cout << i << " ";
    cout << endl;

    return 0;
}


