#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    // index -> score range, 0 -> 0~9, 1 -> 10~19 ...
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++scores[grade/10];
    }

    for (auto i : scores)
        cout << i << " ";

    cout << endl;

    return 0;
}
