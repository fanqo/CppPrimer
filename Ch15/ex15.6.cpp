#include <iostream>
using std::cout;
using std::endl;

#include "Quote.h"

int main()
{
    Quote qt("0-201-78345-X", 20.00);
    Bulk_quote bq("0-201-78345-X", 25.00, 3, 0.1);

    print_total(cout, qt, 1);
    cout << endl;

    print_total(cout, bq, 1);
    cout << endl;

    return 0;
}
