#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <algorithm>
using std::copy;


int main()
{
    vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    auto begi = vi.crbegin();
    auto endi = vi.crend();
    for (int i = 0; i != 3; ++i) {
        ++begi;
        --endi;
    }
    list<int> li(begi, endi);
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    return 0;
}
