#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5};
    int *p1 = &ia[2];
    int *p2 = &ia[4];

    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << "p1 += p2 - p1 : " << *p1 << endl;

    return 0;
}
