#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstddef>
using std::begin;
using std::end;

int main()
{
    int a1[] = {1, 2, 3, 4};
    int a2[] = {1, 2, 3, 4, 5};
    auto a1sz = end(a1) - begin(a1);
    auto a2sz = end(a2) - begin(a2);

    bool aequal = true;
    if (a1sz != a2sz)
        aequal = false;
    else 
        for (int i = 0; i < a1sz; ++i)
            if (a1[i] != a2[i])
                aequal = false;

    if (aequal)
        cout << "a1 is equal to a2" << endl;
    else
        cout << "a1 is not equal to a2" << endl;


    vector<int> v1 {1, 2, 3, 4, 6};
    vector<int> v2 {1, 2, 3, 4, 5};
    
    bool vequal = true;
    if (v1.size() != v2.size())
        vequal = false;
    else
        for (int i = 0; i < v1.size(); ++i)
            if (v1[i] != v2[i])
                vequal = false;

    if (vequal)
        cout << "v1 is equal to v2" << endl;
    else
        cout << "v1 is not equal to v2" << endl;

    return 0;
}

