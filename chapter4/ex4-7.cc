#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned x = 0;
    x--;
    short y = 32767;
    y++;
    unsigned short z = 65535;
    z++;

    cout << x << " " << y << " " << z << endl;

    return 0;
}