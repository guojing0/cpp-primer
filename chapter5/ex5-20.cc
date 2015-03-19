#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string word, sub;

    while (cin >> word) {
        if (word == sub) {
            cout << word << endl;
            break;
        } else {
            sub = word;
        }
    }

    return 0;
}