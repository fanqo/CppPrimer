#ifndef SALES_DATA_H
#define SALES_DATA_H
class Sales_data {
friend std::istream &read(std::istream&, Sales_data&);
public:
    Sales_data(const std::string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p * n) 
        { std::cout << "constructor with 3 arguments" << std::endl; }
    Sales_data() : Sales_data("", 0, 0) 
        { std::cout << "constructor with 0 argument" << std::endl; }
    Sales_data(std::string s) : Sales_data(s, 0, 0) 
        { std::cout << "constructor with 1 string argument" << std::endl; }
    Sales_data(std::istream &is) : Sales_data() 
        { read(is, *this);
          std::cout << "constructor with istream" << std::endl; }

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream &read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

inline double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else 
        return 0;
}

#endif
