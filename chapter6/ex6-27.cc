#include <iostream>

using namespace std;

int sumLst(initializer_list<int> il)
{
    int sum = 0;

    for (const auto &i : il) {
        sum += i;
    }

    return sum;
}

int main(int argc, char *argv[])
{
    cout << sumLst({1, 3, 5}) << endl;
    cout << sumLst({2, 5, 7, 11}) << endl;
    return 0;
}