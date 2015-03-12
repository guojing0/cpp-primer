int main(int argc, char const *argv[])
{
    const int i = 42;
    auto j = i; // j is int
    const auto &k = i; // k is const int ref
    auto *p = &i; // p is a const int pointer
    const auto j2 = i, &k2 = i; // j2 is a const int; k2 is const int ref
    return 0;
}