#include <iostream>

int main(int argc, char const *argv[])
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl; // 10 10

    return 0;
}