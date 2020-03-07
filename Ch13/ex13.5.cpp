#include <iostream>
#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) :
        ps(new std::string(s)), i(0) { }
    HasPtr(const std::string &s , const int ii) :
        ps(new std::string(s)), i(ii) { }
    HasPtr(const HasPtr & hp) :
        ps(new std::string), i(0) { *ps = *hp.ps; i = hp.i; }
    const std::string get_ps() const { return *ps; }
    const int get_i() const { return i; }
private:
    std::string * ps;
    int i;
};

int main()
{
    HasPtr hp1("hp1");
    HasPtr hp2("hp2", 2);
    HasPtr hp3 = HasPtr("hp3", 3);

    std::cout << "hp1: " << hp1.get_ps() << ", " << hp1.get_i() << std::endl
              << "hp2: " << hp2.get_ps() << ", " << hp2.get_i() << std::endl
              << "hp3: " << hp3.get_ps() << ", " << hp3.get_i() << std::endl;
    return 0;
}
