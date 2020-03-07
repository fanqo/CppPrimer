#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <sstream>
using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(cin, line)) {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);

        people.push_back(info);
        record.clear();  // must be contained
    }

    for (auto s : people) {
        cout << s.name << ": ";
        for (auto phn : s.phones)
            cout << phn << " ";

        cout << endl;
    }

    return 0;
}
