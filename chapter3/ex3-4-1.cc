#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string str1, str2;
    cin >> str1 >> str2;

    if (str1 > str2) {
        cout << str1 << endl;
    } else if (str1 < str2) {
        cout << str2 << endl;
    } else {
        cout << "They are equal." << endl;
    }

    return 0;
}