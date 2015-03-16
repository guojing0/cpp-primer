#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5}, *p = arr;

    while (p != end(arr)) {
        *p = 0;
        p++;
    }

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}