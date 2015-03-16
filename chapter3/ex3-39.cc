#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "Happy day", s2 = "Bad cat";
    const char ch1[] = "Know yourself", ch2[] = "Know thyself";

    if (s1 > s2) {
        cout << "String s1 is larger.";
    } else if (s2 < s1) {
        cout << "String s2 is larger.";
    } else {
        cout << "They are equal.";
    }
    cout << endl;

    if (strcmp(ch1, ch2) > 0) {
        cout << "Char ch1 is larger.";
    } else if (strcmp(ch1, ch2) < 0) {
        cout << "Char ch2 is larger.";
    } else {
        cout << "They are equal.";
    }
    cout << endl;

    return 0;
}