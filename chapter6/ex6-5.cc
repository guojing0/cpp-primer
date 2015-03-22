#include <iostream>

using namespace std;

double abs(double x)
{
    return (x < 0) ? -x : x;
}

int main(int argc, char const *argv[])
{
    cout << abs(-10.2) << endl;

    return 0;
}