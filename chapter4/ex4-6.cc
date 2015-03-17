 #include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    while (cin >> num) {
        if (num % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }

    return 0;
}