#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<unsigned> ivec(11, 0);
    unsigned grade;

    while (cin >> grade) {
        if (grade <= 100) {
            auto pos = ivec.begin() + grade / 10;
            (*pos)++;
        }
    }

    for (auto b = ivec.begin(); b != ivec.end(); b++) {
        cout << *b << " ";
    }
    cout << endl;

    return 0;
}