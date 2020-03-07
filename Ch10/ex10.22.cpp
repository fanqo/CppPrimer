#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <functional>
using std::bind;

using namespace std::placeholders;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>
using std::count_if;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    string s;
    vector<string> vs;
    while (cin >> s)
        vs.push_back(s);

    for (auto s : vs)
        cout << s << " ";
    cout << endl;

    auto sum = count_if(vs.begin(), vs.end(), 
               bind(check_size, _1, 6));
    cout << "There are " << sum 
         << " words having length larger than or equal to 6"
         << endl;

    return 0;
}
