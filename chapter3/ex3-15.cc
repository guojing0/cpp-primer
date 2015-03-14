#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
    vector<string> svec;
    string word;

    while (std::cin >> word) {
        svec.push_back(word);
    }

    for (auto i : svec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}