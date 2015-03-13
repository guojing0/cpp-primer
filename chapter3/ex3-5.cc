#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string str;

    while (cin >> str) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}