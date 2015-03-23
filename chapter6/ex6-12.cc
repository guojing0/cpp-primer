#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{
    int x = 42, y = 10;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}