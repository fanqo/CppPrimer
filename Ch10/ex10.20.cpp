#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <algorithm>
using std::count_if;

#include <string>
using std::string;

#include <vector>
using std::vector;

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
            [](string &s) {return s.size() > 6;});
    cout << "There are " << sum << " words having length larger than 6";
    cout << endl;

    return 0;
}
