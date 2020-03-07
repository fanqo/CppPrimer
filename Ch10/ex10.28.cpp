#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::copy;

#include <iterator>
using std::inserter;

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <forward_list>
using std::forward_list;

#include <deque>
using std::deque;

int main()
{
    vector<int>  vi {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "vector: " << endl;
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    list<int> li;
    cout << "list: " << endl;;
    copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    forward_list<int> fli;
    cout << "forward_list: " << endl;
    copy(vi.begin(), vi.end(), front_inserter(fli));
    for (auto i : fli)
        cout << i << " ";
    cout << endl;

    deque<int> di;
    cout << "deque: " << endl;
    copy(vi.begin(), vi.end(), back_inserter(di));
    for (auto i : di)
        cout << i << " ";
    cout << endl;

    return 0;
}

