#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <sstream>
using std::istringstream;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> vs;
    string s;
    while(getline(cin, s))
        vs.push_back(s);

    for(auto line : vs) {
        istringstream iss(line);
        while (iss >> s)
            cout << s << endl;
    }

    return 0;
}


