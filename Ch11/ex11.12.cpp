#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <utility>
using std::pair;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    cout << "Enter string, int pairs: " << endl;
    vector<pair<string, int>> vp;
    string s;
    int i;
    while (cin >> s >> i)
        vp.push_back(make_pair(s, i));

    for (auto v : vp)
        cout << v.first << ", " << v.second << endl;

    return 0;
}
