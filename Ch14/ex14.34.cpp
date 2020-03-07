#include <iostream>
using std::cout;
using std::endl;

struct ITE {
    int operator()(const bool &test, const int &i1, const int &i2) {
        if (test) 
            return i1;
        else
            return i2;
    }
};

int main()
{
    ITE ite;
    auto i1 = ite(true, 1, 0);
    auto i2 = ite(false, 1, 0);

    cout << i1 << " " << i2 << endl;

    return 0;
}
