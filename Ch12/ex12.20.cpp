#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "StrBlob.h"

int main()
{
    string s;
    StrBlob b;
    while (getline(cin, s)) 
        b.push_back(s);

    StrBlobPtr bp(b);
    for (int i = 0; i != b.size(); ++i ) {
        cout << bp.deref() << " ";
        bp.incr();
    }

    cout << endl;

    return 0;
}
