#include <iostream>
using std::cout;
using std::endl;

#include <forward_list>
using std::forward_list;

int main()
{
    forward_list<int> ifl {1, 2, 3, 4, 5, 6, 7, 8};

    auto pre = ifl.before_begin();
    auto curr = ifl.begin();

    while (curr != ifl.end())
        if (*curr % 2) 
            curr = ifl.erase_after(pre);
        else {
            pre = curr;
            ++curr;
        }

    for (auto i : ifl)
        cout << i << " ";

    cout << endl;

    return 0;
}
            
