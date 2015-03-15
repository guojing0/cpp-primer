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

    for (int i = 0; i != ivec.size()-1; i++) {
        cout << ivec[i] + ivec[i+1] << endl;
    }

    return 0;
}