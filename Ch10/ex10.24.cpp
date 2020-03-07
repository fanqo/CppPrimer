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
    vector<int> vi {1, 3, 5, 7, 9, 11, 13, 15};
    string s;
    getline(cin, s);
    auto g = bind(check_size, s, _1);
    for (auto i : vi)
        if (!g(i)) {
            cout << i << " is larger than or equal to \""
                 << s << "\"'s length" << endl;
            return 0;
        }

    cout << "There is no integer in vi larger than or equal to \""
         << s << "\"'s length" << endl;
    return 0;
}
