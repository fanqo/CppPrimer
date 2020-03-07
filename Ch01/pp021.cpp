#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;

    // read in isbn, number of sold copies and cost
    std::cin >> book;

    // write out isbn, number of sold copies, 
    // total price and average price
    std::cout << book << std::endl;

    return 0;
}

