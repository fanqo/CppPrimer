#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string name = "John";
    name = name.insert(0, "Mr. ");
    name = name.append(" Jr.");

    cout << name << endl;

    return 0;
}
    
