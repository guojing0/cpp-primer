#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    float grade;

    while (cin >> grade) {
        if (grade > 90) {
            cout << "high pass";
        } else if (grade <= 75 && grade >= 60) {
            cout << "low pass";
        } else if (grade < 60) {
            cout << "fail";
        } else {
            cout << "pass";
        }
        cout << endl;
    }

    return 0;
}