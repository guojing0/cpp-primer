#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 42, *pi = &i;
    *pi = *pi * *pi;
    std::cout << *pi << std::endl; // the square of 42

    return 0;
}