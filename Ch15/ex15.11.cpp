#include <iostream>
using std::cout;
using std::endl;

#include "Quote.h"

int main()
{
    Quote qt {"0-201-78345-X", 25};
    Bulk_quote bq {"0-201-78345-X", 20, 3, 0.1};
    
    qt.debug();
    bq.debug();

    return 0;
}
