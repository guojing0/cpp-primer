#include <iostream>

using namespace std;

bool ifCap(const string s)
{
    for (auto c : s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void toLowerStr(string &s)
{
    for (auto &c : s) {
        c = tolower(c);
    }
}

int main()
{
    string str = "Hello, worlD.";
    toLowerStr(str);
    cout << str << " " << ifCap(str) << endl;
    return 0;
}