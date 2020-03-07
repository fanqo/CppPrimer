#include <iostream>
#include <fstream>
#include <string>
#include "Query.h"

void runQueries(std::ifstream &infile)
{
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter query, or q to quit: ";
        std::string s;
        if (!getline(std::cin, s) || s == "q") break;
        // Query q(s);
        // Query q = Query("it") | Query("Emma");
        Query q = ~Query("Emma");
        std::cout << q << std::endl;
        print(std::cout, q.eval(tq)) << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::string s(argv[1]);
    std::ifstream infile (s);
    runQueries(infile);

    return 0;
}
    
