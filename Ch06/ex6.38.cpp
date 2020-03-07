#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrRef (int i)
{
    return (i % 2) ? odd : even;
}

int main()
{
    cout << " odd: ";
    for (auto i : odd)
        cout << i << " ";
    cout << endl;

    cout << "even: ";
        for (auto i : even)
            cout << i << " ";
    cout << endl;

    cout << "Enter an integer: " << endl;
    int i;
    cin >> i;
    auto arr = arrRef(i);
    arr[3] = 42;
    
    cout << " odd: ";
    for (auto i : odd)
        cout << i << " ";
    cout << endl;

    cout << "even: ";
        for (auto i : even)
            cout << i << " ";
    cout << endl;

    return 0;
}

