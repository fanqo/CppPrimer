#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstddef>
using std::size_t;

#include <vector>
using std::vector;

int main()
{
    constexpr size_t array_size = 10;
    unsigned ia[array_size] = {};
    for (int i = 0; i < array_size; ++i)
        ia[i] = i;

    for (auto i : ia)
        cout << i << " ";
    cout << endl;

    unsigned ia2[array_size] = {};
    for (int i = 0; i < array_size; ++i)
        ia2[i] = ia[i];

    for (auto i : ia2)
        cout << i << " ";
    cout << endl;

    vector<unsigned> iv {};
    for (int i = 0; i < array_size; ++i)
        iv.push_back(i);
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    vector<unsigned> iv2 = iv;
    for (auto i : iv2)
        cout << i << " ";
    cout << endl;

    return 0;
}

