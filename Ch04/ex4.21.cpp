#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv {1, 2, 3, 4, 5, 6};
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    for (auto &i : iv)
        if (i % 2 == 1)
            i *= 2;

    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    return 0;
}
