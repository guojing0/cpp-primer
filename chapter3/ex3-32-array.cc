#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10], arr2[10];

    for (int i = 0; i != 10; i++) {
        arr[i] = i;
    }

    for (int i = 0; i != 10; i++) {
        arr2[i] = arr[i];
    }

    for (auto n : arr2) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}