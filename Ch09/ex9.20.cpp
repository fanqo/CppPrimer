#include <iostream>
using std::cout;
using std::endl;

#include <deque>
using std::deque;

#include <list>
using std::list;

int main()
{
    list<int> il{0, 1, 2, 3, 4, 5, 6};
    deque<int> deven;
    deque<int> dodd;

    for (auto i : il)
        if (i % 2 == 0)
            deven.push_back(i);
        else
            dodd.push_back(i);

    for (auto i : deven)
        cout << i << " ";
    cout << endl;

    for (auto i : dodd)
        cout << i << " ";
    cout << endl;

    return 0;
}
