#include <iostream>
using std::cout;
using std::endl;

template<unsigned N>
void print(const int (&a)[N])
{
    for (size_t i = 0; i != N; ++i)
        std::cout << a[i] << " ";
}

int main()
{
    int a1[2] = {0, 1};
    int a2[5] = {1, 2, 3, 4, 5};

    print(a1);
    cout << endl;

    print(a2);
    cout << endl;

    return 0;
}

