#include <iostream>
#include <string>
#include <stdexcept>

#ifndef SALES_DATA_H
#define SALES_DATA_H
class Sales_data {
friend std::istream & operator>>(std::istream&, Sales_data&);
friend std::ostream & operator<<(std::ostream&, const Sales_data&);
friend Sales_data operator+(const Sales_data&, const Sales_data&);
public:
    // Sales_data() = default;
    Sales_data(std::string s = "") : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(std::istream &);

    std::string isbn() const { return bookNo; }
private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::ostream & operator<<(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();

    return os;
}

std::istream & operator>>(std::istream& is, Sales_data& item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
        item.revenue = price * item.units_sold;
    else
        item = Sales_data();

    return is;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    if (lhs.bookNo == rhs.bookNo) {
        Sales_data sum = lhs;
        sum.units_sold = lhs.units_sold + rhs.units_sold;
        sum.revenue = lhs.revenue + rhs.revenue;
        return sum;
    } else
        throw std::runtime_error("adding books must have the same number");
}

inline 
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else 
        return 0;
}

inline
Sales_data::Sales_data(std::istream &is)
{
    is >> *this;
}

#endif
