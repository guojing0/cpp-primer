#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int val = 1024, *ptr1 = &val, **ptr2 = &ptr1;
    cout << "The value is " << val << " " << *ptr1 << " " << **ptr2 << endl;
    cout << "The address of ptr1 is " << ptr1 << " " << *ptr2 << endl;
    cout << "The address of ptr2 is " << ptr2 << endl;
    return 0;
}