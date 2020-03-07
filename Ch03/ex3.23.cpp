#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (auto it = iv.cbegin(); it != iv.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    for (auto it = iv.begin(); it != iv.end(); ++it) 
        *it *= 2;
    
        
    for (auto it = iv.cbegin(); it != iv.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
