#include <iostream>
#include "Chapter6.h"

using namespace std;

int fact(int val)
{
    int ret = 1;
    while (val >= 1) {
        ret *= val--;
    }
    return ret;
}

int interact()
{
    cout << "Please enter a number: ";
    int n;
    cin >> n;
    return fact(n);
}
