#include <iostream>
#include <string>

struct Scales_data {
    std::string booNo;
    int num_sold {0};
    double revenue {0.0};
};

int main()
{
    Scales_data book1, book2;

    double price = 0;

    std::cin >> book1.booNo >> book1.num_sold >> price;
    book1.revenue = book1.num_sold * price;

    std::cin >> book2.booNo >> book2.num_sold >> price;
    book2.revenue = book2.num_sold * price;

    if (book1.booNo == book2.booNo) {
        unsigned totalCnt = book1.num_sold + book2.num_sold;
        double totalRevenue = book1.revenue + book2.revenue;

        std::cout << book1.booNo << " " << totalCnt
                  << " " << totalRevenue << " ";
        if (totalCnt != 0) 
            std::cout << totalRevenue / totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;

        return 0;
    } else {
        std::cerr << "Data must refer to the sanme ISBN"
                  << std::endl;

        return -1;
    }

}

