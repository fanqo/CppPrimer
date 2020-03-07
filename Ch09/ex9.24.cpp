#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv;
    cout << "at: " << iv.at(0) << endl;
    cout << "[]: " << iv[0] << endl;
    cout << "front: " << iv.front() << endl;
    cout << "begin: " << *iv.begin() << endl;

    return 0;
}
