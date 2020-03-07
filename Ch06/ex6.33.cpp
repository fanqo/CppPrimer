#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

void printvector(vector<int> & iv)
{
    static vector<int>::iterator vbeg = iv.begin();
    if(vbeg != iv.end()) {
        cout << *vbeg++ << " ";
        printvector(iv);
    }
}

int main()
{
    vector<int> ia {1, 2, 3, 4, 5, 6};
    printvector(ia);
    cout << endl;

    return 0;
}

