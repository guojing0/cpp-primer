#include <iostream>
#include <vector>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> ivec, ivec2, ivec3;

    ivec(10, 42);
    ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (int i = 0; i != 10; i++) {
        ivec3.push_back(42);
    }

    return 0;
}