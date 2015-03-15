#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto b = ivec.begin(); b != ivec.end(); b++) {
        *b *= 2;
        cout << *b << endl;
    }

    return 0;
}