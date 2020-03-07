#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <memory>
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> spv()
{
    return make_shared<vector<int>>();
}

void read(shared_ptr<vector<int>> p)
{
    int i;
    while (cin >>i)
        p->push_back(i);
}

void print(shared_ptr<vector<int>> p)
{
    for (auto i : *p)
        cout << i << " ";
    cout << endl;
}

int main()
{
    auto p = spv();
    read(p);
    print(p);

    return 0;
}
