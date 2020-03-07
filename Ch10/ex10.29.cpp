#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

int main(int argc, char **argv)
{
    cout << argv[1] << endl;
    ifstream in(argv[1]); 
    istream_iterator<int> in_file(in), eof;
    vector<int> vec(in_file, eof);

    ostream_iterator<int> out(cout, " ");
    for (auto i : vec)
        *out++ = i;
    cout << endl;

    return 0;
}


