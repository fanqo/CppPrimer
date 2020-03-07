#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstddef>
using std::size_t;

int main()
{
    constexpr size_t array_size = 10;
    unsigned ia[array_size] = {};
    for (int i = 0; i < array_size; ++i)
        ia[i] = i;

    for (auto i : ia)
        cout << i << " ";
    cout << endl;

    return 0;
}

