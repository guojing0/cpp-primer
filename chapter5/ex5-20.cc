#include <iostream>

using namespace std;

int main()
{
    string str, tempstr;

    if (cin >> str) {
        while (cin >> tempstr) {
            if (str == tempstr) {
                cout << str << endl;
                break;
            } else {
                str = tempstr;
            } // it should output no words are align
        }
    }
    return 0;
}