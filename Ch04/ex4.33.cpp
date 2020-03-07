#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter some value: " << endl;
    int someValue;
    cin >> someValue;

    int x = 0, y = 0, iexp = 0;
    iexp = (someValue ? ++x, ++y : --x, --y); 
    cout << iexp << endl;
    cout << x << ", " << y << endl;

    int x2 = 0, y2 = 0, iexp2 = 0;
    iexp2 = ((someValue ? ++x2, ++y2 : --x2), --y2); 
    cout << iexp2 << endl;
    cout << x2 << ", " << y2 << endl;

    return 0;
}

    
