#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string name = "John";
    name = name.insert(name.size(), " Jr.");
    name = name.insert(0, "Mr. ");

    cout << name << endl;

    return 0;
}
    
