#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;

    // test if item1 and item2 denote the same book
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;

        return 0;  // success
    } else {
        std::cerr << "Data must refer to same ISBN"
            << std::endl;

        return -1;  // fail
    }
}
