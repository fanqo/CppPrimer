#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <deque>
using std::deque;

#include <string>
using std::string;

int main()
{
    cout << "Enter strings: " << endl;
    string s; 
    deque<string> ds;
    while(cin >> s)
        ds.push_back(s);

    for(auto beg = ds.begin(); beg != ds.end(); ++beg)
        cout << *beg << " ";

    cout << endl;

    return 0;
}
