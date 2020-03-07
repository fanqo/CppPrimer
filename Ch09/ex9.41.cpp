#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<char> vc {'a', 'b', 'c', 'd'};
    string s;
    s.assign(vc.begin(), vc.end());

    cout << s << endl;

    return 0;
}
