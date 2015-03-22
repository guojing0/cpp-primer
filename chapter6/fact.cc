#include <iostream>

#include "Chapter6.h"

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