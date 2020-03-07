#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <set>
using std::multiset;

#include <algorithm>
using std::copy;

#include <iterator>
using std::inserter;
using std::back_inserter;

int main()
{
    multiset<string> c1, c2;
    vector<string> v {"a", "b", "c", "d", "e", "a"};

    copy(v.begin(), v.end(), inserter(c1, c1.end()));
    for (auto i : c1)
        cout << i << " ";
    cout << endl;

    // associative-container does NOT support push_front or push_back
    // copy(v.begin(), v.end(), back_inserter(c2));
    // for (auto i : c2)
    //     cout << i << " ";
    // cout << endl;

    return 0;
}


