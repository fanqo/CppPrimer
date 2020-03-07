#include <iostream>
#include <vector>

struct X {
    X() {std::cout << "X()" << std::endl; }
    X(const X& ) { std::cout << "X(const X&)" << std::endl; }
};

void ref(X& x)
{
    std::cout << "ref(X& x)" << std::endl;
}

void nonref(X x)
{
    std::cout << "nonref(X x)" << std::endl;
}

int main()
{
    std::cout << "new X" << std::endl << "\t";
    X *xp = new X();

    std::cout << "ref " << std::endl << "\t";
    ref(*xp);
    
    std::cout << "nonref " << std::endl << "\t";
    nonref(*xp);

    std::cout << "vector<X> " << std::endl << "\t";
    std::vector<X> xv;
    xv.push_back(*xp);

    return 0;
}
