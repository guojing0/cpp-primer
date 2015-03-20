#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    cout << "Enter two numbers:" << endl;
    while (cin >> x >> y) {
        try {
            if (y == 0) {
                throw runtime_error("Divisor cannot be zero.");
            } else {
                cout << x / y << endl;
            }
        } catch (runtime_error err) {
            cout << err.what() << "\nTry again? Enter y or n." << endl;

            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break;
            }
        }
    }

    return 0;
}