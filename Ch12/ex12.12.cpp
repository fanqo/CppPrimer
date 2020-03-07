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
    auto p = new int();
    auto sp = make_shared<int>();
    process(sp);
    cout << sp << ": " << *sp << endl;
    cout << endl;

    // process(new int());  // int* cannot be converted to shared_ptr<int>
    // cout << endl;

    // process(p);
    // cout << p << ": " << *p << endl;
    // cout << endl;

    process(shared_ptr<int>(p));
    cout << p << ": " << *p << endl;

    return 0;
}
