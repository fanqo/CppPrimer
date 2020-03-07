#include <memory>
using std::unique_ptr;

int main()
{
    unique_ptr<int> p1(new int(3));
    // unique_ptr<int> p2(p1);
    unique_ptr<int> p2;
    p2 = p1;


    return 0;
}
