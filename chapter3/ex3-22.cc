#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> text;
    string str;

    while (getline(cin, str)) {
        text.push_back(str);
    }

    for (auto b = text.begin(); b != text.end() && !b->empty(); b++) {
        for (auto &c : *b) {
            c = toupper(c);
        }
        cout << *b << endl;
    }

    return 0;
}