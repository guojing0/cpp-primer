#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    float grade;

    while (cin >> grade) {
        string finalGrade = (grade > 90)                 ? "high pass"
                          : (grade <= 75 && grade >= 60) ? "low pass"
                          : (grade < 60)                 ? "fail"
                          : "pass";
        cout << finalGrade << endl;
    }

    return 0;
}