#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int *p = &arr[0][0];

    typedef int intArr[4];

    for (intArr &row : arr) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    for (int x = 0; x != 3; x++) {
        for (int y = 0; y != 4; y++) {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i != 12; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}