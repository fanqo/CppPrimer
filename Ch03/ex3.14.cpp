#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    cout << "Enter integers: " << endl;

    vector<int> iv;

    int i;
    while (cin >> i) {
        iv.push_back(i);
    }

    cout << iv.size() << " integers are entered." << endl;

    return 0;
}
