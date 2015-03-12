#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    // a = 3, b = 4, c = 3, d = 3
    return 0;
}