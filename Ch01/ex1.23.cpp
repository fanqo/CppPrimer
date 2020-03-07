#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currBook, book;
    
    // read in an item first
    if (std::cin >> currBook) {
        int cnt = 1;
        while (std::cin >> book) {
            if (currBook.isbn() == book.isbn())
                cnt += 1;
            else {
                std::cout << currBook.isbn() << " is sold " 
                    << cnt << " times." << std::endl;
                currBook = book;
                cnt = 1;
            }
        }
        std::cout << currBook.isbn() << " is sold "
            << cnt << " times." << std::endl;
    }
    return 0;
}
