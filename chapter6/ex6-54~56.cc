#include <iostream>
#include <vector>

using namespace std;

int retInt(int x, int y);

int addInt(int x, int y)
{
    return x + y;
}

int subInt(int x, int y)
{
    return x - y;
}

int mulInt(int x, int y)
{
    return x * y;
}

int divInt(int x, int y)
{
    return x / y;
}

using RI = int(*)(int, int);

vector<RI> funcPtr{addInt, subInt, mulInt, divInt};

int main()
{
    int a = 8, b = 2;
    cout << addInt(a, b) << " " << subInt(a, b) << " " << mulInt(a, b) << " " << divInt(a, b) << endl;
    for (auto i : funcPtr) {
        cout << i(a, b) << endl;
    }
    return 0;
}