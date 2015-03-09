// Output the sum from negative one hundred to positive one hundred.
// The resulting value of sum is 0.

#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = -100; i <= 100; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;

    return 0;
}