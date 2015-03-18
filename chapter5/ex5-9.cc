#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    unsigned aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;

    while (cin >> ch) {
        if (ch == 'a') {
            ++aCount;
        } else if (ch == 'e') {
            ++eCount;
        } else if (ch == 'i') {
            ++iCount;
        } else if (ch == 'o') {
            ++oCount;
        } else if (ch == 'u') {
            ++uCount;
        }
    }
    cout << aCount << " " << eCount << " " << iCount << " " << oCount << " " << uCount << endl;

    return 0;
}