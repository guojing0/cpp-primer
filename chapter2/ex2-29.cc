int main(int argc, char const *argv[])
{
    int i, *const cp = &i;
    int *p1, *const p2 = &i;
    const int ic = 1, &r = ic;
    const int *const p3 = &i;
    const int *p;

    i = ic;
    p1 = p3;
    p1 = &ic;
    p3 = &ic;
    p2 = p1;
    ic = *p3;

    return 0;
}

/*

ex-29.cc:10:8: error: assigning to 'int *' from incompatible type
      'const int *const'
    p1 = p3;
       ^ ~~
ex-29.cc:11:8: error: assigning to 'int *' from incompatible type 'const int *'
    p1 = &ic;
       ^ ~~~
ex-29.cc:12:8: error: read-only variable is not assignable
    p3 = &ic;
    ~~ ^
ex-29.cc:13:8: error: read-only variable is not assignable
    p2 = p1;
    ~~ ^
ex-29.cc:14:8: error: read-only variable is not assignable
    ic = *p3;
    ~~ ^
5 errors generated.
make: *** [ex-29] Error 1

*/