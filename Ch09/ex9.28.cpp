#include <iostream>
using std::cout;
using std::endl;

#include <forward_list>
using std::forward_list;

#include <string>
using std::string;

void in_af(forward_list<string> &sfl, const string s1, const string s2)
{
    auto curr = sfl.begin();
    auto pre = sfl.before_begin();
    bool is_insert {false};
    while (curr != sfl.end())
        if (*curr == s1) {
            curr = sfl.insert_after(curr, s2);
            is_insert = true;
        } else {
            pre = curr;
            ++curr;
        }

    if (!is_insert)
        curr = sfl.insert_after(pre, s2);


}

void print(const forward_list<string> &sfl)
{
    for (auto s : sfl)
        cout << s << " ";
    cout << endl;
}

int main()
{
    forward_list<string> sfl {"a", "ab", "ac", "ab", "ad"};
    auto sfl1(sfl);
    auto sfl2(sfl);

    cout << "  : ";
    print(sfl);

    cout << "ab: ";
    in_af(sfl1, "ab", "be");
    print(sfl1);

    cout << "bb: ";
    in_af(sfl2, "bb", "be");
    print(sfl2);

    return 0;
}

