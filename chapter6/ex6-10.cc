#include <iostream>

using namespace std;

void swapNum(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 42, b = 36;
    swapNum(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}