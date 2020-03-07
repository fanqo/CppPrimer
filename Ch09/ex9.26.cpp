#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <list>
using std::list;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> iv;
    list<int> il;
    for (auto i : ia) {
        iv.push_back(i);
        il.push_back(i);
    }

    auto ivit = iv.begin();
    while (ivit != iv.end())
        if (*ivit % 2)
            ++ivit;
        else
            ivit = iv.erase(ivit);

    auto ilit = il.begin();
    while (ilit != il.end())
        if (*ilit % 2)
            ilit = il.erase(ilit);
        else
            ++ilit;

    cout << "vector: ";
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    cout << "list: ";
    for (auto i : il)
        cout << i << " ";
    cout << endl;

    return 0;
}
