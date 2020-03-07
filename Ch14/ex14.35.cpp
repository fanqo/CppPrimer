#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

class ObtainString {
public:
    ObtainString(std::istream &i = std::cin) :
        is(i) { }
    std::string operator()(std::string &s){
        if (getline(is, s))
            return s;
        else
            return "";
    }
private:
    std::istream &is;
};

int main()
{
    ObtainString obs1;
    ObtainString obs2(cin);
    string s;
    cout << obs1(s) << endl;
    cout << obs2(s) << endl;

    return 0;
}
        
