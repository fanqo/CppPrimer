#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <list>
using std::list;

#include <algorithm>
using std::sort;
using std::unique;

void elimDup(list<string> &words)
{
    words.sort();
    words.unique();
}

int main()
{
    list<string> ls;
    string s;
    while(cin >> s)
        ls.push_back(s);

    for (auto s : ls)
        cout << s << " ";
    cout << endl;

    elimDup(ls);

    for (auto s : ls)
        cout << s << " ";
    cout << endl;
    
    return 0;
}

