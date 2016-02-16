#include <iostream>

using namespace std;

string makePlural(size_t ctr, const string &word, const string &ending="s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    string suc = "success", fal = "failure";

    cout << makePlural(1, suc, "es") << " " << makePlural(2, suc, "es") << endl;
    cout << makePlural(1, fal) << " " << makePlural(2, fal) << endl;

    return 0;
}