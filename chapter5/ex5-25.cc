/*
    The program includes the solutions to ex 5-23 and ex 5-24.
*/

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor;

    while (cin >> dividend >> divisor) {
        try {
            if (divisor == 0) {
                throw runtime_error("Divisor cannot be zero.");
            } else {
                cout << dividend / divisor << endl;
            }
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Try again? Enter y or n." << endl;
            char c;
            cin >> c;

            if (!cin || c == 'n') {
                break;
            }
        }

    }

    return 0;
}