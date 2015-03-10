#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 5, i2 = 20;
    int *ptr1 = &i, *ptr2 = &i;
    ptr1 = &i2;
    *ptr2 = 10;
    std::cout << i << " " << i2 << std::endl;
    std::cout << *ptr1 << " " << *ptr2 << std::endl;
    return 0;
}