#include <iostream>

using namespace std;

int abs(int x)
{
    return (x < 0) ? -x : x;
}

int main(int argc, char const *argv[])
{
    cout << abs(-10) << endl;

    return 0;
}