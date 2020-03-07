#include <vector>
using std::vector;

class NoDefault {
public:
    NoDefault(int i) : mem(i) {}
private:
    int mem;
};

class C {
public:
    C() : nd(NoDefault(0)) {}

private:
    NoDefault nd;
};

int main()
{
    vector<C> vec(10);
    
    return 0;
}
