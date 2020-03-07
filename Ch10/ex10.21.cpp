#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 2;
    auto f = [&i] ()-> bool { return !(i > 0 ? --i: false);};
    auto isf = f();
    cout << i << ", ";
    isf ? cout << "true": cout << "false";
    cout << endl;

    auto isf2 = f();
    cout << i << ", " ;
    isf2 ? cout << "true": cout << "false";
    cout << endl;
    
    auto isf3 = f();
    cout << i << ", " ;
    isf3 ? cout << "true": cout << "false";
    cout << endl;

    return 0;
}

