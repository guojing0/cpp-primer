#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string word, sub;

    while (cin >> word) {
        if (word == sub && isupper(word[0])) {
            cout << word << endl;
            break;
        } else {
            sub = word;
        }
    }

    return 0;
}