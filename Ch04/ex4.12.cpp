#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j, k;
    cout << "Enter integers for i, j, k: " << endl;
    cin >> i >> j >> k;
    cout << "'i != j < k' is: "; 
    if (i != j < k) 
        cout << "true"; // i != (j < k)
    else
        cout << "false";
    
    cout << endl;  

    return 0;
}
