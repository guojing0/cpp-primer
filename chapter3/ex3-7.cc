#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    string s;

    while (cin >> s) {
        for (char &c : s) {
            c = 'X';
        }
        cout << s << endl;
    }

    return 0;
}