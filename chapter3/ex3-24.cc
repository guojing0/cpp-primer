#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int num;

    while (cin >> num) {
        ivec.push_back(num);
    }

    for (auto b = ivec.begin(); b != ivec.end() - 1; b++) {
        cout << *b + *(b + 1) << endl;
    }

    for (auto beg = ivec.begin(), end = ivec.end() - 1; beg <= end; beg++, end--) {
        cout << *beg + *end << endl;
    }

    return 0;
}