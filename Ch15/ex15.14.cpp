#include <iostream>
using std::cout;
using std::endl;

#include <string>

class base {
public:
    base() = default;
    base(const std::string &s) : basename(s) { }
    std::string name() { return basename; }
    virtual void print(std::ostream &os) { os << basename; }
private:
    std::string basename;
};

class derived : public base {
public:
    derived() = default;
    derived(const std::string &s) : base(s) { }
    void print(std::ostream &os) { base::print(os); os << " " << i; }
private:
    int i;
};

int main()
{
    base bobj{"base"};
    base *bp1 = &bobj;
    base &br1 = bobj;

    derived dobj{"derived"};
    base *bp2 = &dobj;
    base &br2 = dobj;

    bobj.print(cout); cout << endl;

    dobj.print(cout); cout << endl;

    cout << bp1->name() << endl;

    cout << bp2->name() << endl;

    br1.print(cout); cout << endl;

    br2.print(cout); cout << endl;

    return 0;
}
