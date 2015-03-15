#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];

    for (int i = 0; i != 10; i++) {
        arr[i] = i;
    }

    for (auto n : arr) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}