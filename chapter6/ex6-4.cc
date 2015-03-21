#include <iostream>

using namespace std;

int fact(int val)
{
    int result = 1;

    while (val > 1) {
        result *= val--;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int i;

    cout << "Enter a number:" << endl;
    while (cin >> i) {
        cout << "The factorial of " << i << " is " << fact(i) << endl;
    }

    return 0;
}