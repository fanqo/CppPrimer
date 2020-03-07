#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::unique;

void elimDup(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> vs;
    string s;
    while(cin >> s)
        vs.push_back(s);

    for (auto s : vs)
        cout << s << " ";
    cout << endl;

    elimDup(vs);

    for (auto s : vs)
        cout << s << " ";
    cout << endl;
    
    return 0;
}

