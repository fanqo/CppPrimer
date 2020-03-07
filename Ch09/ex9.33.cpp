#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vi {0, 1, 2, 3};
    auto begin = vi.begin();
    while (begin != vi.end()) {
        ++begin;
        auto tmp = vi.insert(begin, 42);
        ++begin;
    }

    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    return 0;
}
