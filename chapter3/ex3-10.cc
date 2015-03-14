#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    string s;

    while (getline(cin, s)) {
        for (auto &c : s) {
            if (!ispunct(c)) {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}