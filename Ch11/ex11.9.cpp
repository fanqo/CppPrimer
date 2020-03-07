#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <list>
using std::list;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

int main()
{
    int nl = 0;
    string line;
    string word;
    map<string, list<int>> word_shown;
    while (getline(cin, line)) {
        ++nl;
        istringstream sline(line);
        string w;
        while (sline >> w)
            word_shown[w].push_back(nl);
    }

    for (const auto w : word_shown) {
        cout << w.first << " shown in: ";
        for (const auto l : w.second)
            cout << l << " ";
        cout << endl;
    }

    return 0;
}

