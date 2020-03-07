#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::fill_n;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv{1,2,3,4,5,6};
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    fill_n(iv.begin(), iv.size(), 0);
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    return 0;
}
