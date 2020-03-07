#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;
using std::make_shared;

void process(shared_ptr<int> ptr)
{
    cout << ptr << ": " << *ptr << endl;
}

int main()
{
    shared_ptr<int> p (new int(42));
    process(shared_ptr<int>(p.get()));
    cout << p << ": " << *p << endl;

    return 0;
}
