#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 42;
    void *p = &i;
    long *lp = &i;
    return 0;
}

/*

ex2-24.cc:7:11: error: cannot initialize a variable of type 'long *' with an
      rvalue of type 'int *'
    long *lp = &i;
          ^    ~~
1 error generated.
make: *** [ex2-24] Error 1

*/