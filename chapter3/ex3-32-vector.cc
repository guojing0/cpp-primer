#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec, ivec2;

    for (int i = 0; i != 10; i++) {
        ivec.push_back(i);
    }

    ivec2 = ivec;

    for (auto n : ivec2) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}