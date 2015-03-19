#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    unsigned aCount = 0, eCount = 0, iCount = 0, oCount = 0,
             uCount = 0, nCount = 0, rCount = 0, tCount = 0;

    while (cin >> ch) {
        switch (ch) {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'E':
            case 'e':
                ++eCount;
                break;
            case 'I':
            case 'i':
                ++iCount;
                break;
            case 'O':
            case 'o':
                ++oCount;
                break;
            case 'U':
            case 'u':
                ++uCount;
                break;
            case ' ':
                ++nCount;
                break;
            case '\r':
                ++rCount;
                break;
            case '\v':
            case '\t':
                ++tCount;
                break;
            default:
                break;
        }
    }
    cout << aCount << " " << eCount << " " << iCount << " " << oCount << " "
         << uCount << " " << nCount << " " << rCount << " " << tCount << endl;

    return 0;
}