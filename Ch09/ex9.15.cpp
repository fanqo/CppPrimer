#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vi1 {1, 2, 3};
    vector<int> vi2 {1, 2, 4};
    vector<int> vi3 {1, 2, 3};

    cout << std::boolalpha;  // cout true/false
    cout << (vi1 == vi2) << endl;
    cout << (vi1 == vi3) << endl;

    return 0;
}

