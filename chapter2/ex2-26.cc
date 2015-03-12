int main(int argc, char const *argv[])
{
    const int buf;
    int cnt = 0;
    const int sz = cnt;
    ++sz; ++cnt;
    return 0;
}

/*

ex2-26.cc:3:15: error: default initialization of an object of const type
      'const int'
    const int buf;
              ^
ex2-26.cc:6:5: error: read-only variable is not assignable
    ++sz; ++cnt;
    ^ ~~
2 errors generated.
make: *** [ex2-26] Error 1

*/