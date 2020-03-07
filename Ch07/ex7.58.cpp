#include <vector>
using std::vector;

class Example {
public:
    // static double rate = 6.5;
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec(vecSize);
};

constexpr double Example::rate;
vector<double> Example::vec;

int main()
{
    return 0;
}
