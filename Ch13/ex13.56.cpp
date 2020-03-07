#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <utility>

class Foo {
    friend std::ostream & print (std::ostream &, const Foo &);
public:
    Foo (std::initializer_list<int> li) : data(li.begin(), li.end()) { }
    Foo sorted() &&;
    Foo sorted() const &;
private:
    std::vector<int> data;
};

Foo Foo::sorted() && {
    std::cout << "sorted() &&" << std::endl;
    std::sort(data.begin(), data.end());
    return *this;
}

Foo Foo::sorted() const & {
    std::cout << "sorted() const &" << std::endl;
    Foo ret(*this);
    return ret.sorted();
}

std::ostream& print(std::ostream& os, const Foo &f)
{
    for(auto i : f.data)
        os << i << " ";

    return os;
}

int main()
{
    Foo f {1,2,3,6,5,4};
    print(std::cout, f) << std::endl;

    // print(std::cout, f.sorted()) << std::endl;  // endless loop
    print(std::cout, std::move(f).sorted()) << std::endl;


    return 0;
}

