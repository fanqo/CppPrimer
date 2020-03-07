#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    cout << "Enter grade: " << endl;
    int grade;
    cin >> grade;

    string finalgrade = 
           (grade > 90) ? "high pass"
                        : ((grade >= 60) && (grade < 75))  ? "low pass"
                                       : (grade < 60) ? "fail" : "pass";
    cout << finalgrade << endl;

    if (grade < 60)
        finalgrade = "fail";
    else if (grade < 75)
        finalgrade = "low pass";
    else if (grade > 90)
        finalgrade = "high pass";
    else
        finalgrade = "pass";

    cout << finalgrade << endl;

    return 0;
}
