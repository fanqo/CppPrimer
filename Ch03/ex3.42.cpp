#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstddef>
using std::size_t;

int main()
{
    vector<int> iv {1, 2, 3, 4, 5};
    const size_t sz = iv.size();
    int ia[sz];
    for (int i = 0; i != sz; ++i)
        ia[i] = iv[i];

    for (auto i : ia)
        cout << i << " ";
    cout << endl;

    return 0;
}
