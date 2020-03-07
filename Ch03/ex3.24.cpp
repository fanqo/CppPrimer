#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    cout << "Enter integers: " << endl;
    vector<int> iv;
    int i;
    while (cin >> i)
        iv.push_back(i);
    
    for (auto beg = iv.cbegin(); (beg + 1) != iv.cend(); ++beg)
        cout << *beg + *(beg + 1) << " ";
    cout << endl;

    for (auto beg = iv.cbegin(), end = iv.cend(); beg <= end; ++beg, --end)
        cout << *beg + *(end - 1) << " ";
    cout << endl;

    return 0;
}
