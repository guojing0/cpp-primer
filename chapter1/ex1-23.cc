#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item currItem, item;

    if (std::cin >> currItem) {
        int count = 1;
        while (std::cin >> item) {
            if (currItem.isbn() == item.isbn()) {
                count++;
            } else {
                std::cout << currItem << " occurs " << count << " times." << std::endl;
                currItem = item;
                count = 1;
            }
        }
        std::cout << currItem << " occurs " << count << " times." << std::endl;
    }

    return 0;
}