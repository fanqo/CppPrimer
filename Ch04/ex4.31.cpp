#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec {0, 1, 2, 3, 4, 5};
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size();
                                      ix++, cnt--)
        ivec[ix] = cnt;

    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}
