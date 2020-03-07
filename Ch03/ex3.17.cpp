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
    cout << "Enter words: " << endl;

    vector<string> sv;
    string word;
    while (cin >> word) 
        sv.push_back(word);
   
    for (auto &w : sv)  // reference is needed
        for (auto &c : w)
            c = toupper(c);

    for (auto w : sv)
        cout << w << endl;

    return 0;

}

