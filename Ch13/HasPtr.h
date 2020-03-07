#include <ostream>
#include <string>
#include <cstddef>
#include <utility>

#ifndef HASPTR_H
#define HASPTR_H
class HasPtr {
    friend void swap(HasPtr &, HasPtr &);
    friend std::ostream& print (std::ostream &, const HasPtr &);
public:
    HasPtr(const std::string &s = std::string(), int ii = 0) :
        ps(new std::string(s)), i(ii), use(new std::size_t(1)) {}
    HasPtr(const HasPtr &p) :
        ps(p.ps), i(p.i), use(p.use) { ++*use; }
    // HasPtr& operator=(const HasPtr&);
    HasPtr& operator=(HasPtr);
    bool operator<(const HasPtr&);
    ~HasPtr();
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

HasPtr::~HasPtr()
{
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

// HasPtr& HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use;
//     if (--*use == 0) {
//         delete ps;
//         delete use;
//     }
//     ps = rhs.ps;
//     i = rhs.i;
//     use = rhs.use;
//     return *this;
// }

inline
void swap(HasPtr &lhs, HasPtr &rhs)
{
    cout << "swap()" << endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(HasPtr rhs)
{
    swap(*this, rhs);
    return *this;
}

std::ostream& print(std::ostream &os, const HasPtr &hp)
{
    os << *hp.ps << ", " << hp.i;
    return os;
}

inline
bool HasPtr::operator<(const HasPtr &hp)
{
    return *this->ps < *hp.ps;
}

#endif
