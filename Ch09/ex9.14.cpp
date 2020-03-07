#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    list<const char *> lcp = {"a", "ab", "abc"};
    vector<string> vs(lcp.begin(), lcp.end());

    for (auto c : vs)
        cout << c << " ";

    cout << endl;

    return 0;
}
