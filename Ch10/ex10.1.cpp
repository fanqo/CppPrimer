#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <algorithm>
using std::count;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv;
    cout << "Enter a series of integer: " << endl;
    int i;
    while (cin >> i)
        iv.push_back(i);

    auto cnum = count(iv.begin(), iv.end(), 42);
    cout << "There are " << cnum << " Twenty-four(s)." << endl;

    return 0;
}
        
