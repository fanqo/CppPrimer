#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<int> v1;
    cout << "a: " << v1.size() << endl;

    vector<int> v2(10);
    cout << "b: " << v2.size() << endl;

    vector<int> v3 (10, 42);
    cout << "c: " << v3.size() << endl;

    vector<int> v4{10};
    cout << "d: " << v4.size() << endl;

    vector<int> v5{10, 42};
    cout << "e: " << v5.size() << endl;

    vector<string> v6 {10};
    cout << "f: " << v6.size() << endl;

    vector<string> v7{10, "hi"};
    cout << "g: " << v7.size() << endl;

    return 0;
}
