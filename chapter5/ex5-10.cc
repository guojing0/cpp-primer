#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    unsigned aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;

    while (cin >> ch) {
        switch (toupper(ch)) {
            case 'A':
                ++aCount;
                break;
            case 'E':
                ++eCount;
                break;
            case 'I':
                ++iCount;
                break;
            case 'O':
                ++oCount;
                break;
            case 'U':
                ++uCount;
                break;
            default:
                break;
        }
    }
    cout << aCount << " " << eCount << " " << iCount << " " << oCount << " " << uCount << endl;

    return 0;
}