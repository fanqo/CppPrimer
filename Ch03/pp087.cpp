#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string line;
    while (getline(cin, line))
        cout << line << endl;

    return 0;
}
