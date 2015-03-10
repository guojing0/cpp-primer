#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item total, trans;

    if (std::cin >> total) {
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data input." << std::endl;
        return -1;
    }
    return 0;
}