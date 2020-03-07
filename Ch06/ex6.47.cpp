#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

void printvector(const vector<int> &ia)
{
#ifndef NDEBUG
    cout << "size of current vector is: " << ia.size() << endl;
#endif
    auto beg = ia.begin();
    if (beg != ia.end())
    {
        cout << *beg++ << " ";
        vector<int> tma (beg, ia.end());
        printvector(tma);
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    printvector(a);
    cout << endl;

    return 0;
}
