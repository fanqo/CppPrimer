#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec {1, 2, 3, 4, 5};
    int i = 6;

    cout << *vec.begin() << " " << *(vec.begin()) << endl;
    
    cout << *vec.begin() + i << " "
         << (*(vec.begin())) + i << endl;

    return 0;
}
