#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <map>
using std::map;

int main()
{
    map<string, vector<int>> msvi;
    msvi["a"].push_back(1);

    map<string, vector<int>>::iterator fm;
    fm = msvi.find("a");

    cout << fm->second[0] << endl;

    return 0;
}
