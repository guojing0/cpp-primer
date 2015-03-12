#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char const *argv[])
{
    Sales_data item1, item2;
    double item1_price = 0.0, item2_price = 0.0;
    cin >> item1.bookNo >> item1.units_sold >> item1_price;
    cin >> item2.bookNo >> item2.units_sold >> item2_price;
    item1.revenue = item1.units_sold * item1_price;
    item2.revenue = item2.units_sold * item2_price;

    if (cin >> item1.bookNo >> item1.units_sold >> item1_price) {
        while (cin >> item2.bookNo >> item2.units_sold >> item2_price) {
            if (item1.bookNo == item2.bookNo) {
                unsigned totalCount = item1.units_sold + item2.units_sold;
                double totalRevenue = item1.revenue + item2.revenue;
            } else {
                cout << item1.bookNo << " " << item1.units_sold << " " << item1_price << " " << item1.revenue << endl;
                item1.bookNo = item2.bookNo;
                item1.units_sold = item2.units_sold;
                item1.revenue = item2.revenue;
                item1_price = item2_price;
            }
        }
        cout << item1.bookNo << " " << item1.units_sold << " " << item1_price << " " << item1.revenue << endl;
    }
    
    return 0;
}