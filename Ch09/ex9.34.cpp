#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vi {0, 1, 2, 3};
    auto iter = vi.begin();
   /* while (iter != vi.end())
    *    if (*iter % 2)
    *        iter = vi.insert(iter, *iter);
    *++iter;
    */
    while (iter != vi.end()) {
        if (*iter % 2) { 
            iter = vi.insert(iter, *iter);
            ++iter;
        }

        ++iter;
    }
    
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    return 0;
}
