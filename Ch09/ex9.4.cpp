#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

bool find_i(vector<int>::iterator b, vector<int>::iterator e, int i)
{
    bool finded {false};
    while (b != e) {
        if (*b == i) 
            finded = true;

        ++b;
    }

    return finded;
}

int main()
{
    vector<int> vi {1, 2, 3, 4, 5};
    cout << find_i(vi.begin(), vi.end(), 3) << endl;
    
    cout << find_i(vi.begin(), vi.end(), 6) << endl;

    return 0;
}
