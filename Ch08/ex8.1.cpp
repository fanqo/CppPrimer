#include <iostream>
using std::istream;
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

istream& proc_stream(istream& is)
{
    string s;
    while(true) {
        getline(is, s);
        if(is.eof()) {
            cout << "is.eof(): " << is.eof() << endl;
            is.clear();
            cout << "is.eof(): " << is.eof() << endl;
            return is;
        }
        cout << s << endl;
    }
}

int main()
{
    string ss;
    proc_stream(cin) >> ss;
    cout << "After EOF: " << ss << endl;

    return 0;
}


