#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

vector<int>::iterator find_i(vector<int>::iterator b, vector<int>::iterator e, int i)
{
    while (b != e) {
        if (*b == i) 
            return b;
        ++b;
    }

    return e;
}

int main()
{
    vector<int> vi {1, 2, 3, 4, 5};
    auto index3 = find_i(vi.begin(), vi.end(), 3);
    cout << *index3 << endl;
    
    auto index6 = find_i(vi.begin(), vi.end(), 6);
    cout << *index6 << endl;

    return 0;
}
