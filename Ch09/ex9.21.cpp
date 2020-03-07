#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vi;
    auto iter = vi.begin();
    for (int i = 0; i != 10; ++i)
        iter = vi.insert(iter, i);

    for (auto i : vi)
        cout << i << " ";

    cout << endl;

    return 0;
}

