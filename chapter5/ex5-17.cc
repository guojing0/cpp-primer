#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{0, 1, 2}, ivec2{0, 1, 3, 2};
    auto beg = ivec.begin(), beg2 = ivec2.begin();

    if (ivec.size() < ivec2.size()) {
        for (; beg != ivec.end() && *beg == *beg2; ++beg, ++beg2) {
            ;
        }
        if (beg == ivec.end()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (ivec.size() > ivec2.size()) {
        for (; beg2 != ivec2.end() && *beg == *beg2; ++beg, ++beg2) {
            ;
        }
        if (beg2 == ivec2.end()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "They are equal." << endl;
    }

    return 0;
}