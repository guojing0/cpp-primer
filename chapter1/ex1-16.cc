#include <iostream>

int main(int argc, char const *argv[])
{
    int val = 0, sum = 0;

    while (std::cin >> val) {
        sum += val;
    }
    std::cout << sum << std::endl;

    return 0;
}