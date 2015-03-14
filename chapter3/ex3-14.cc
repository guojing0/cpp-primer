#include <iostream>
#include <vector>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int num;

    while (std::cin >> num) {
        ivec.push_back(num);
    }

    for (auto i : ivec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}