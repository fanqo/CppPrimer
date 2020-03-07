#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    const string hexdigits = "0123456789ABCDEF";  // possible hex digits

    cout << "Enter a series of numbers between 0 and 15" 
         << " seperated by spaces. Hit ENTER when finished: "
         << endl;
    
    string result;
    string::size_type n;  // decimal number
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];

    cout << "Your hex number is: " << result << endl;

    return 0;
}
