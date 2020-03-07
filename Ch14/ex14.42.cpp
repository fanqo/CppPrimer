#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::sort;

#include <vector>
using std::vector;

#include <functional>
using std::greater;

#include <stack>
using std::stack;


int main()
{
    vector<int> vi {1000, 1024, 999, 1028, 500, 2048};

    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    sort(vi.begin(), vi.end(), greater<int>());
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    stack<int, vector<int>> si(vi);

    int val = 1024;
    int n = 0;
    while (!si.empty()) {
        if (si.top() > val) 
            ++n;
        si.pop();
    }

    cout << "There are " << n << " numbers larger than " << n << endl;

    return 0;
}


