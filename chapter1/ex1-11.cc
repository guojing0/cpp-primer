#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers (the first number is smaller):" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        v1++;
    }

    return 0;
}