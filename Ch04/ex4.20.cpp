#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> s {"one line", "another line"};
    vector<string>::iterator iter = s.begin();

    cout << "a: " << *iter++ << endl;
    // cout << "b: " << (*iter)++ << endl;  // string has no ++
    // cout << "c: " << *iter.empty() << endl;  // pointer has no empty()
    cout << "d: " << iter->empty() << endl;
    // cout << "e: " << ++*iter << endl;  // string has no ++
    cout << "f: " << iter++->empty();

    return 0;
}
