#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    for (size_t i = 0; i != argc; ++i) {
        s += argv[i];
    }
    
    cout << s << endl;
    return 0;
}