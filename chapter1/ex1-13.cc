#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;

    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }

    std::cout << "Enter two numbers (the first number is smaller):" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    for (int i = v1; i <= v2; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}