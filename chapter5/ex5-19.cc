#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Please input two strings:" << endl;
    do {
        string str, str2;
        cin >> str >> str2;
        if (str.size() < str2.size()) {
            cout << str << endl;
        } else {
            cout << str2 << endl;
        }
    } while (true);

    return 0;
}