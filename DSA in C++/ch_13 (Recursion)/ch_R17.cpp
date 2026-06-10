#include <iostream>
using namespace std;
int i = 1;
int n;
int print(int i, int n)
{
    if (i > n)
        return i;
    cout << i << " ";
    i++;
    print(i, n);
}
int main()
{
    cin >> n;
    print(i, n);

    return 0;
}