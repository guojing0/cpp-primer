// It is illegal due to the lack of std::cout in the second and third line.

#include <iostream>

int main(int argc, char const *argv[])
{
    int v1 = 3, v2 = 5; // as an example
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}