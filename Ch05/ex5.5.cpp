#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> scores {"F", "D", "C", "B", "A", "A++"};

    cout << "Enter grade: " << endl;
    int grade;
    cin >> grade;

    string lettergrade;

    if (grade < 60)
        lettergrade = scores[0];
    else 
        lettergrade = scores[(grade - 50) / 10];

    cout << lettergrade << endl;

    return 0;
}
