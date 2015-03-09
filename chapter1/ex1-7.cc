#include <iostream>

/*

/* */

*/

int main(int argc, char const *argv[])
{
    std::cout << "What a wonderful world." << std::endl;
    return 0;
}

// c++     ex1-7.cc   -o ex1-7
// ex1-7.cc:5:1: warning: '/*' within block comment [-Wcomment]
// /* */
// ^
// ex1-7.cc:7:2: error: expected unqualified-id
// */
//  ^
// 1 warning and 1 error generated.
// make: *** [ex1-7] Error 1