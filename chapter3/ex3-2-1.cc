#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string line;

    while (getline(cin, line)) {
        cout << line << endl;
    }

    return 0;
}