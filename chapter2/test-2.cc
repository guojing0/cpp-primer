#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 42, i2 = 10;
    int *const ptr = &i;
    *ptr = i2;
    std::cout << i << " " << i2 << std::endl;
    return 0;
}