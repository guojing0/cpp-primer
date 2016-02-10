#include <iostream>

using namespace std;

void reset(int &i)
{
    i = 0;
}

int main(int argc, char const *argv[])
{
    int i = 42;
    cout << "i equals " << i << " and i is " << &i << endl;
    reset(i);
    cout << "i equals " << i << " and i is " << &i << endl;
    return 0;
}