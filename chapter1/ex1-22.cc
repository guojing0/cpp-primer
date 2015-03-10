#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item item, sum;

    if (std::cin >> sum) {
        while (std::cin >> item) {
            if (sum.isbn() == item.isbn()) {
                sum += item;
            } else {
                std::cout << sum << std::endl;
                sum = item;
            }
        }
        std::cout << sum << std::endl;
    }

    return 0;
}