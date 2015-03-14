#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
    vector<string> svec;
    string str;

    while (std::cin >> str) {
        svec.push_back(str);
    }

    for (auto &s : svec) {
        for (auto &i : s) {
            i = toupper(i);
        }
    }

    for (auto s : svec) {
        std::cout << s << std::endl;
    }

    return 0;
}