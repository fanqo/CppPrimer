#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>
using std::partition;
using std::for_each;

#include <functional>
using std::bind;

using namespace std::placeholders;

void elimDup(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDup(words);
    auto bigIndex = partition(words.begin(), words.end(),
                    bind(check_size, _1, sz));
    for_each(bigIndex, words.end(),
         [] (const string &s) {cout << s << " ";});
    cout << endl;
}




int main()
{
    vector<string> vs;
    string s;
    while(cin >> s)
        vs.push_back(s);

    for (const auto &s : vs)
        cout << s << " ";
    cout << endl;
    
    biggies(vs, 5);

    return 0;
}

