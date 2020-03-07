#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::toupper;

int main()
{
    vector<string> text;
    string line;
    while (getline(cin, line))
        text.push_back(line);

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) 
        for (auto its = it->begin(); its != it->end(); ++its)
            *its = toupper(*its);
    
    for (auto it = text.begin(); it != text.end(); ++it)
        cout << *it << endl;

    return 0;
}
