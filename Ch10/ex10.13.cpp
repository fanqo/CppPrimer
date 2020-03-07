#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>
using std::partition;

bool largerSize(const string &s)
{
    return !(s.size() >= 5);
}

int main()
{
    string s;
    vector<string> vs;
    while (cin >> s)
        vs.push_back(s);

    auto largerIndex = partition(vs.begin(), vs.end(), largerSize);
    for (auto i = largerIndex; i != vs.end(); ++i)
        cout << *i << " ";
    cout << endl;

    return 0;
}
