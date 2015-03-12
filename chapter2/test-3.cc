#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 42, i2 = 10;
    const int *ptr = &i;
    ptr = &i2;
    std::cout << *ptr << std::endl;
    return 0;
}