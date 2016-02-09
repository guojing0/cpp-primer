#include <iostream>

using namespace std;

int main()
{
    do {
        string v1, v2;
        cout << "Enter two strings: " << endl;
        if (cin >> v1 >> v2) {
            if (v1.size() < v2.size()) {
                cout << v1 << endl;
            } else {
                cout << v2 << endl;
            }
        }
    } while (cin);

    return 0;
}