#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <algorithm>
using std::partition;
using std::copy;

#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include <vector>
using std::vector;

int main(int argc, char *argv[])
{
    ifstream infile(argv[1]);
    istream_iterator<int> in_file(infile);
    istream_iterator<int> eof;
    vector<int> vi(in_file, eof);

    ostream_iterator<int> pout(cout, " ");
    copy(vi.begin(), vi.end(), pout);
    cout << endl;

    auto sepIndex = partition(vi.begin(), vi.end(), 
                     [](const int &i) {return i % 2 == 0;});

    ofstream evenout(argv[2]);
    ostream_iterator<int> even_out(evenout, " \n");
    ofstream oddout(argv[3]);
    ostream_iterator<int> odd_out(oddout, " \n");
    copy(vi.begin(), sepIndex, even_out);
    copy(sepIndex, vi.end(), odd_out);

    return 0;
}




