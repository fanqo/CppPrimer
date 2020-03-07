#include <iostream>
using std::cout;
using std::endl;

static int count = 0;
struct numbered {
    numbered() : mysn(++count) { }
    numbered(numbered & ) : mysn(++count) { }
    int mysn;
};

void f(numbered s) { cout << s.mysn << endl; }
void f1(const numbered &s) { cout << s.mysn << endl; }

int main()
{
    numbered a, b=a, c=b;
    f(a);
    f(b);
    f(c);

    f1(a); 
    f1(b);
    f1(c);

    return 0;
}
