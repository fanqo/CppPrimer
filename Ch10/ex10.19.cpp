#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>
using std::stable_partition;
using std::for_each;

void elimDup(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDup(words);
    auto bigIndex = stable_partition(words.begin(), words.end(),
                       [sz](const string &s) {return s.size() < sz;});
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

