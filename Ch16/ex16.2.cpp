#include <iostream>
using std::cout;
using std::endl;

template<typename T>
int compare(const T &t1, const T &t2)
{
    if (t1 < t2) return -1;
    if (t2 < t1) return 1;

    return 0;
}

int main()
{
    cout << "compare(1, 2): " << compare(1, 2) << endl;
    // cout << "compare(1, 0.9): " << compare(1, 0.9) << endl;
    cout << "compare(1.0, 0.9): " << compare(1.0, 0.9) << endl;
    cout << "compare(\"a\", \"b\"): " << compare("a", "b") << endl;

    return 0;
}

