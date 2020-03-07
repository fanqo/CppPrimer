#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    cout << "Enter strings: " << endl;

    vector<string> sv;

    string s;
    while (cin >> s) {
        sv.push_back(s);
    }

    cout << sv.size() << " strings are entered." << endl;

    return 0;
}
