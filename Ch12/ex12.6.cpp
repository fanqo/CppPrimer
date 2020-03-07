#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

vector<int> * pvi()
{
    auto p = new vector<int>;
    return p;
}

void read(vector<int>* p)
{
    int i;
    while (cin >>i)
        p->push_back(i);
}

void print(vector<int> * p)
{
    for (auto i : *p)
        cout << i << " ";
    cout << endl;
}

int main()
{
    auto p = pvi();
    read(p);
    print(p);
    delete(p);

    return 0;
}


