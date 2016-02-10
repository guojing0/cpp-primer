#include <iostream>

using namespace std;

void swapPtr(int *&x, int *&y)
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int i, j;
    int *p = &i, *p2 = &j;
    cout << p << " " << p2 << endl;
    swapPtr(p, p2);
    cout << p << " " << p2 << endl;
    return 0;
}