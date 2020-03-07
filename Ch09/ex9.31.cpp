#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <forward_list>
using std::forward_list;

/* In LIST or FORWARD_LIST, after adding elements,
 * original pointers and references are still usable
 */

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = li.begin();
    while (iter != li.end()) {
        if (*iter % 2) {
            auto tmp = li.insert(iter, *iter);
            ++iter;
        } else
            iter = li.erase(iter);
    }

    for (auto i : li)
        cout << i << " ";
    
    cout << endl;

    forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto fiter = fli.begin();
    auto fpre = fli.before_begin();
    while (fiter != fli.end()) {
        if (*fiter % 2) {
            auto tmp = fli.insert_after(fpre, *fiter);
            fpre = fiter;
            ++fiter;
        } else {
            fiter = fli.erase_after(fpre);
        }
    }

    for (auto i : fli)
        cout << i << " ";

    cout << endl;


    return 0;
}
