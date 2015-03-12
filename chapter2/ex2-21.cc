int main(int argc, char const *argv[])
{
    int i = 0;
    double *dp = &i;
    int *ip = i;
    int *p = &i;
    return 0;
}

/*

ex2-21.cc:4:13: error: cannot initialize a variable of type 'double *' with an
      rvalue of type 'int *'
    double *dp = &i;
            ^    ~~
ex2-21.cc:5:10: error: cannot initialize a variable of type 'int *' with an
      lvalue of type 'int'
    int *ip = i;
         ^    ~
2 errors generated.
make: *** [ex2-21] Error 1

*/