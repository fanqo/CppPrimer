#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

using std::end;
using std::begin;

int main()
{
    int ia[] = {1, 2, 3, 4, 5};
    vector<int> iv (begin(ia), end(ia));
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    return 0;
}
