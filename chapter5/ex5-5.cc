#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;

    while (cin >> grade) {
        string letterGrade;
        if (grade < 60) {
            letterGrade = scores[0];
        } else {
            letterGrade = scores[(grade-50)/10];
            if (grade != 100) {
                if (grade % 10 > 7) {
                    letterGrade += "+";
                } else if (grade % 10 < 3) {
                    letterGrade += "-";
                }
            }
        }
        cout << letterGrade << endl;
    }

    return 0;
}