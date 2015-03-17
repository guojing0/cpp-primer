#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int i;

    while (cin >> i) {
        ivec.push_back(i);
    }

    for (auto x : ivec) {
        cout << ((x % 2 != 0) ? 2 * x : x) << " ";
    }
    cout << endl;

    return 0;
}