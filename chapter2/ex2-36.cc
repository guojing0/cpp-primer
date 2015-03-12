#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a; // int &d = a;
    ++c;
    ++d;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    // a = 4, b = 4, c = 4, d = 4
    return 0;
}