#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

string make_plural(size_t ctr, const string &word,
                   const string ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    size_t ctr;
    string s;
    cout << "Enter size and string: " << endl;
    cin >> ctr >> s;

    cout << ctr << " " << make_plural(ctr, s) << endl;
    cout << ctr << " " << make_plural(ctr, s, "en") << endl;

    return 0;
}
