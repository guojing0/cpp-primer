int main(int argc, char const *argv[])
{
    int i, *const cp;
    int *p1, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    const int *p;

    return 0;
}

/*

ex2-28.cc:3:19: error: default initialization of an object of const type
      'int *const'
    int i, *const cp;
                  ^
ex2-28.cc:4:21: error: default initialization of an object of const type
      'int *const'
    int *p1, *const p2;
                    ^
ex2-28.cc:5:15: error: default initialization of an object of const type
      'const int'
    const int ic, &r = ic;
              ^
ex2-28.cc:6:22: error: default initialization of an object of const type
      'const int *const'
    const int *const p3;
                     ^
4 errors generated.
make: *** [ex2-28] Error 1

*/