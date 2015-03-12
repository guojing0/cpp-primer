// FULL OF BUGS

#include <iostream>
#include <string>

#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char const *argv[])
{
    Sales_data item1, item2, total;

    if (cin >> item1.bookISBN >> item1.soldNum >> item1.price) {
        while (cin >> item2.bookISBN >> item2.soldNum >> item2.price) {
            if (item1.bookISBN == item2.bookISBN) {
                item1.revenue = item1.soldNum * item1.price;
                item2.revenue = item2.soldNum * item2.price;
                total.soldNum = item1.soldNum + item2.soldNum;
                total.revenue = item1.revenue + item2.revenue;
            } else {
                cout << "Output: " << item1.bookISBN << " " <<  total.soldNum << " " << total.revenue << endl;
                item1.bookISBN = item2.bookISBN;
                item1.soldNum = item2.soldNum;
                item1.price = item2.price;
                item1.revenue = item2.revenue;
            }
        }
        cout << "Output: " << item1.bookISBN << " " <<  total.soldNum << " " << total.revenue << endl;
    } else {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}