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
    while (cin >> i) 
        iv.push_back(i);

    vector<int>::size_type sz = iv.size();
    
    for (int i = 1; i < sz; ++i)
        cout << iv[i-1] + iv[i] << " ";

    cout << endl;

    for (int i = 0; i < sz / 2; ++i)
        cout << iv[i] + iv[sz - 1 - i] << " ";

    cout << endl;

    return 0;
}
