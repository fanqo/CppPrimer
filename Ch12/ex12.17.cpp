#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::unique_ptr;

void print(unique_ptr<int>& p)
{
    cout << *p << endl;
}

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;

    // IntP p0(ix); // no matching function
    // IntP p1(pi); // pi need to be new

    IntP p2(pi2);
    print(p2);

    // IntP p3(&ix);

    IntP p4(new int(2048));
    print(p4);

    // IntP p5(p2.get());  

    return 0;
}
