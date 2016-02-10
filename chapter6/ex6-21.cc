#include <iostream>

using namespace std;

int cmpInt(int x, int *y)
{
    if (x > *y) {
        return x;
    } else {
        return *y;
    }
}

int main()
{
    int i = 10, *j = &i;
    cout << cmpInt(4, j) << endl;
    return 0;
}