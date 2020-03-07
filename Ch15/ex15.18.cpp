#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
    Base() { std::cout << "Base "; }
    void pub_mem() { std::cout << "Base pub_mem()"; }
protected:
    int prot_mem;
private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    Pub_Derv() { std::cout << "Pub_derv "; }
    int f() { return prot_mem; }
};

struct Priv_Derv : private Base {
    Priv_Derv() { std::cout << "Priv_Derv "; }
    int f1() const { return prot_mem; }
};

struct Prot_Derv : protected Base {
    Prot_Derv() { std::cout << "Prot_Derv "; }
    int f2() const { return prot_mem; }
};

struct Derived_from_Public : public Pub_Derv {
    Derived_from_Public() { std::cout << "Derived_from_Public "; }
    int use_base() { return prot_mem; }
};

struct Derived_from_Private : public Priv_Derv {
    Derived_from_Private() { std::cout << "Derived_from_Private "; }
    // int use_base() { return prot_mem; }
};

struct Derived_from_Protected : public Prot_Derv {
    Derived_from_Protected() { std::cout << "Derived_from_Protected "; }
    int use_base() { return prot_mem; }
};

int main()
{
    Pub_Derv d1;
    Base *p = &d1;
    cout << endl;

    Priv_Derv d2;
    // p = &d2;    
    // only publicly heritaging class can be transfer to base class
    cout << endl;

    Prot_Derv d3;
    // p = &d3;
    cout << endl;


    Derived_from_Public dd1;
    p = &dd1;
    cout << endl;

    Derived_from_Private dd2;
    // p = &dd2;
    cout << endl;

    Derived_from_Protected dd3;
    // p = &dd3;
    cout << endl;

    return 0;
}




