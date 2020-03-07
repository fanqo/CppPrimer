#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <algorithm>
using std::find;

int main()
{
    cout << "Enter words: " << endl;
    string s;
    vector<string> words;
    if (cin >> s)
        words.push_back(s);

    while (cin >> s) {
        auto index = find(words.begin(), words.end(), s);
        if (index == words.end())
            words.push_back(s);
    }

    for (const auto &w : words)
        cout << w << " ";
    cout << endl;

    return 0;
}

