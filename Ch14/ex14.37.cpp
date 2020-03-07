#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::for_each;

class isEqual {
public:
    isEqual(int i, int s = 0) : value(i), sub(s) {}
    void operator()(int& i) {
        if (i == value)
            i = sub;
    }
private:
    int value;
    int sub;
};

int main()
{
    vector<int> vi {1, 2, 3, 4, 5};
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    for_each(vi.begin(), vi.end(), isEqual(3, 0));
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    return 0;
}


