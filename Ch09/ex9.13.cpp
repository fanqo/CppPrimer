#include <list>
using std::list;

#include <vector>
using std::vector;

int main()
{
    list<int> li {1, 2, 3, 4, 5};
    vector<double> vd(li.begin(), li.end());

    vector<int> vi {1, 2, 3, 4, 5};
    vector<double> vd2(vi.begin(), vi.end());

    return 0;
}
