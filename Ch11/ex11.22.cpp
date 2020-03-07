#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <utility>
using std::pair;

int main()
{
    map<string, vector<int>> msv;

    pair<map<string, vector<int>>::iterator, bool>
        ret = msv.insert({"a", {1}});

    cout << ret.first->first << " "
         << *(ret.first->second.cbegin()) << endl;

    return 0;
}


