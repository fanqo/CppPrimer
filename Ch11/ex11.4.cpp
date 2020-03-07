#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

#include <cctype>
using std::tolower;

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word) {
        for (auto &c : word)
            if (c == '.' || c == ',')
                c = '\0';
            else
                c = tolower(c);
        
        ++word_count[word];
    }

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
