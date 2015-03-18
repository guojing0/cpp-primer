#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;

    while (cin >> grade) {
        string letterGrade = grade < 60 ? scores[0] : scores[(grade-50)/10];
        letterGrade += (grade < 60 || grade == 100) ? "" :
                       (grade % 10 > 7)             ? "+" :
                       (grade % 10 < 3)             ? "-" : "";
        cout << letterGrade << endl;
    }

    return 0;
}