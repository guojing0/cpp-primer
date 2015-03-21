#include <iostream>

using namespace std;

size_t countCalls()
{
    static size_t ctr = 0;
    return ctr++;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i != 10; ++i) {
        cout << countCalls() << endl;
    }
    return 0;
}