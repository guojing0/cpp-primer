#include <iostream>

using namespace std;

int fact(int val)
{
    if (val <= 1) {
        return 1;
    } else {
        return val * fact(val - 1);
    }
}

int interact(int val)
{
    cout << "The factorial of " << val << " is " << fact(val) << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    int i;

    cout << "Enter a number:" << endl;
    while (cin >> i) {
        interact(i);
    }

    return 0;
}