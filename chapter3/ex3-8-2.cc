#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    string s;

    for (int i = 0; i != s.size(); i++) {
        s[i] = 'X';
    }
    cout << s << endl;

    return 0;
}