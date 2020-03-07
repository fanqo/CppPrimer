#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vi {1, 2, 3, 4, 5};
    for (auto i = vi.cend(); i != vi.cbegin();) {
        --i;
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
