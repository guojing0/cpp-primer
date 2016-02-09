#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> svec;
    string s, curr, max;
    int count = 1, tempCount = 1;

    while (cin >> s) {
        svec.push_back(s);
    }

    auto beg = svec.begin();

    while (beg != svec.end()) {
        if (*beg == curr) {
            count += 1;
        } else {
            curr = *beg;
            count = 1;
        }

        if (count > tempCount) {
            tempCount = count;
            max = curr;
        }
        ++beg;
    }

    cout << max << " " << tempCount << endl;

    return 0;
}