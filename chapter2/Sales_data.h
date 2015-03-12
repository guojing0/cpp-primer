#include <string>

struct Sales_data {
    std::string bookISBN;
    signed soldNum = 0;
    unsigned price = 0;
    double revenue = 0.0;
};