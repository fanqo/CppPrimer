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
    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v2(10);
    cout << "b: " << v2.size() << endl;
    for (auto it = v2.cbegin(); it != v2.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v3 (10, 42);
    cout << "c: " << v3.size() << endl;
    for (auto it = v3.cbegin(); it != v3.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v4{10};
    cout << "d: " << v4.size() << endl;
    for (auto it = v4.cbegin(); it != v4.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v5{10, 42};
    cout << "e: " << v5.size() << endl;
    for (auto it = v5.cbegin(); it != v5.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<string> v6 {10};
    cout << "f: " << v6.size() << endl;
    for (auto it = v6.cbegin(); it != v6.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<string> v7{10, "hi"};
    cout << "g: " << v7.size() << endl;
    for (auto it = v7.cbegin(); it != v7.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
