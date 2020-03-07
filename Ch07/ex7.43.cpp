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
    C c;
    
    return 0;
}
