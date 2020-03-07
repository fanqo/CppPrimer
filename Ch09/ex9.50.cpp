#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> sv{"1.1", "2.2", "3.3", "4.4", "5.5"};
    int isum = 0;
    for (auto s : sv)
        isum += stoi(s);
    cout << "sum: " << isum << endl;

    double dsum = 0.0;
    for (auto s : sv)
        dsum += stod(s);
    cout << "sum: " << dsum << endl;

    return 0;
}
        
