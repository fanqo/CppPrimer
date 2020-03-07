#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <numeric>
using std::accumulate;

#include <vector>
using std::vector;

int main()
{
    cout << "Enter a series of integers: " << endl;
    vector<int> iv;
    int i; 
    while (cin >> i)
        iv.push_back(i);

    int sum = accumulate(iv.cbegin(), iv.cend(), 0);
    cout << "Sum: " << sum << endl;

    return 0;
}
