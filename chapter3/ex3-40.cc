#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch1[] = "What is", ch2[] = "Next?";
    auto len = strlen(ch1) + strlen(ch2);
    char ch3[len];

    strcpy(ch3, ch1);
    strcat(ch3, " ");
    strcat(ch3, ch2);

    cout << ch3 << endl;

    return 0;
}