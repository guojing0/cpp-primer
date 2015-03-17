#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = (((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2));
    int result = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;

    cout << i << " " << result << endl;

    return 0;
}