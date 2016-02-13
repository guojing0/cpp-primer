#include <iostream>
#include <vector>

using namespace std;

void outvec(vector<int>::const_iterator v1, vector<int>::const_iterator v2)
{
    if (v1 < v2) {
        cout << *v1 << " ";
        outvec(++v1, v2);
    }
}

int main(int argc, char *argv[])
{
    vector<int> iv{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    outvec(iv.begin(), iv.end());
    return 0;
}