#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    while (cin >> x >> y) {
        cout << x / y << endl;
    }

    return 0;
}