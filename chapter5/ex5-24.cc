#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    while (cin >> x >> y) {
        if (y == 0) {
            throw runtime_error("Divisor cannot be zero.");
        } else {
            cout << x / y << endl;
        }
    }

    return 0;
}