#include <string>

#ifndef QUOTE_H
#define QUOTE_H
class Quote {
    friend double print_total(std::ostream &, const Quote &, std::size_t);
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) :
        bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;
    virtual void debug() { 
        std::cout << "bookNo: " << bookNo << ", "
                  << "price: " << price << std::endl;
    }
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, std::size_t, double);
    double net_price(std::size_t) const override;
    void debug() override {
        std::cout << "bookNo: " << this->isbn() << ", "
                  << "price: " << price << ", "
                  << "discount: " << discount << std::endl;
    }
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

inline
Bulk_quote::Bulk_quote(const std::string &book, double p,
                       std::size_t qty, double disc) :
                       Quote(book, p), min_qty(qty), discount(disc) { }

double Bulk_quote::net_price(std::size_t cnt) const {
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}


double print_total(std::ostream &os, const Quote &item, std::size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
       << " # sold: " << n << " total due: " << ret << std::endl;

    return ret;
}

#endif
