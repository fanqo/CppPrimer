#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::unique_copy;

#include <iterator>
using std::inserter;

#include <vector>
using std::vector;

#include <list>
using std::list;

int main()
{
    vector<int>  vi {1, 1, 2, 3, 1, 5, 7, 3, 2};
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    list<int> li;
    unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    return 0;
}

