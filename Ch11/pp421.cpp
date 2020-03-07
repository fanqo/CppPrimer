#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
        ++word_count[word];

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
