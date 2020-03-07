#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned score;
    auto beg = scores.begin();
    while (cin >> score)
        if (score <= 100)
            ++(*(beg + score/10));

    for (auto it = scores.cbegin(); it != scores.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}

