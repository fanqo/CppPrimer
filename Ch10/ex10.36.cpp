#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <algorithm>
using std::find;

int main()
{
    list<int> li {1, 2, 3, 0, 4, 5, 0, 7};
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    auto index = find(li.crbegin(), li.crend(), 0);
    cout << *index << endl;

    return 0;
}
