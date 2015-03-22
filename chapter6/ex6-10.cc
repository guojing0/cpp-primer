#include <iostream>

using namespace std;

void swap(int *p, int *p2)
{
    int temp;

    temp = *p;
    *p = *p2;
    *p2 = temp;
}

int main(int argc, char const *argv[])
{
    int x = 10, y = 20;
    cout << x << " " << y << endl;

    swap(&x, &y);
    cout << x << " " << y << endl;
    
    return 0;
}