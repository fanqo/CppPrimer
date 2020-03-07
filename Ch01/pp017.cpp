#include <iostream>

int main()
{
    // new value is read into val, and compare with currVal
    int currVal = 0, val = 0;

    // make sure at least one value is read
    if (std::cin >> currVal) {
        int cnt = 1;   // occurance of currVal
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                    << cnt << " times " << std::endl;
                currVal = val;   // set currVal to new value
                cnt = 1;   // reset occurance
            }
        } // end of while
        
        // print the occurance of last currVal
        std::cout << currVal << " occurs "
            << cnt << " times " << std::endl;
    } // end of if

    return 0;
}
        
