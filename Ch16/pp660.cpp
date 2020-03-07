#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Blob.h"

int main()
{
    Blob<int> ia {1};
    ia.push_back(2);

    cout << ia.back() << endl;

    Blob<string> ia2 {"a", "b"};
    cout << ia2[1] << endl;

    return 0;
}
