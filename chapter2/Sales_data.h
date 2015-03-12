#include <string>

struct Sales_data {
    std::string bookISBN;
    unsigned soldNum = 0;
    double price = 0.0;
    double revenue = 0.0;
};