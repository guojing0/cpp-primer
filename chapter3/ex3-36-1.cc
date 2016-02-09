#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5}, arr2[5] = {1, 2, 3, 4, 5};
    int *p = arr, *p2 = arr2;

    auto b = begin(arr), b2 = begin(arr2);
    for (b, b2; b != end(arr), b2 != end(arr2); b++, b2++) {
        if (*b == *b2) {

        } else {
            cout << "Not equal" << endl;
        }
    }

    return 0;
}