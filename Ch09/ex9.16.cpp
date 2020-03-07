#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <list>
using std::list;

int main()
{
    vector<int> vi1 {1, 2, 3};
    list<int> vi2 {1, 2, 3};

    bool eq {true};
    auto beg1 = vi1.begin();
    auto beg2 = vi2.begin();

    if (vi1.size() == vi2.size())
        for(; beg1 != vi1.end(); ++beg1, ++beg2) {
            if (*beg1 != *beg2)
                eq = false;
        }
    else
        eq = false;


    cout << std::boolalpha;  // cout true/false
    cout << eq << endl;

    return 0;
}

