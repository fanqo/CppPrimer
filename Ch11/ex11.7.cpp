#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    map<string, vector<string>> surnames;

    surnames["sur1"] = {"child1"};

    for (const auto sur : surnames) {
        cout << sur.first << " has children: ";
        for (const auto chd : sur.second)
            cout << chd << " ";

        cout << endl;
    }

    surnames["sur1"].push_back("child2");
    for (const auto sur : surnames) {
        cout << sur.first << " has children: ";
        for (const auto chd : sur.second)
            cout << chd << " ";

        cout << endl;
    }

    return 0;
}

