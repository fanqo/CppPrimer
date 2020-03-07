#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include <algorithm>
using std::sort;
using std::copy;
using std::unique_copy;

#include <vector>
using std::vector;

int main()
{
    istream_iterator<int> isi(cin);
    istream_iterator<int> eof;
    vector<int> vi(isi, eof);

    ostream_iterator<int> osi(cout, " ");
    copy(vi.begin(), vi.end(), osi);
    cout << endl;

    sort(vi.begin(), vi.end());
    unique_copy(vi.begin(), vi.end(), osi);
    cout << endl;

    return 0;
}

