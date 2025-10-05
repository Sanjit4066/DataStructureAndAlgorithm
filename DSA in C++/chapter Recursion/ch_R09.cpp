// printing a string in reverse recursively
#include <iostream>
using namespace std;
void printRev(string str, int idx)
{
    if (idx < 0)
    {

        return;
    }
    cout << str[idx];
    printRev(str, idx - 1);
}
int main()
{
    string str = "Hello";
    printRev(str, str.length() - 1);
    return 0;
}