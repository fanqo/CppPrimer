#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // unsigned scores[11] = {};
    unsigned score;
    while (cin >> score)
        if (score <= 100)
            ++scores[score/10];

    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    return 0;
}
