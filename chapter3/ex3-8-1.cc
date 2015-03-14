#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    string s;
    int i = 0;

    while (getline(cin, s)) {
        while (i != s.size()) {
            s[i] = 'X';
            i++;
        }
        cout << s << endl;
    }

    return 0;
}