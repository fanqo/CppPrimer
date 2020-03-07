#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main(int argc, char **argv)
{
    ifstream input(argv[1]);

    vector<string> vs;
    string s;
    while(getline(input, s)) {
        vs.push_back(s);
    }

    for(auto s : vs)
        cout << s << endl;

    return 0;
}
