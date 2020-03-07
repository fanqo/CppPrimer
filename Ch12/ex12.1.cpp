#include <iostream>
using std::cout;
using std::endl;

#include "StrBlob.h"

StrBlob b1;

int main()
{
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    cout << "b1: " << b1.size() << "; "
         << "b2: " << b2.size() << endl;

    b2.push_back("about");
    cout << "b1: " << b1.size() << "; "
         << "b2: " << b2.size() << endl;
    
    return 0;
}
