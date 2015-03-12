#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char const *argv[])
{
    Sales_data total;
    double price = 0;

    if (std::cin >> total.bookNo >> total.units_sold >> price) {
        Sales_data trans;
        double transPrice = 0;
        while (std::cin >> trans.bookNo >> total.units_sold >> transPrice) {
            if (total.bookNo == trans.bookNo) {
                total.revenue = total.units_sold * price;
                trans.revenue = trans.units_sold * transPrice;
                total.revenue += trans.revenue;
            } else {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
    } else {
        std::cerr << "No data?" << std::endl;
        return -1;
    }
    return 0;
}