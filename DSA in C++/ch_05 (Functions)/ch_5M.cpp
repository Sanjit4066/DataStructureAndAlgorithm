// here I will find the nth position number from fibonacci series
#include <iostream>
using namespace std;
void nThValue(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << "the fibonacci value of " << n << " number is:" << a;
        }
        int next = a + b;
        a = b;
        b = next;
    }
}
int main()
{
    int n;
    cout << "enter value of n:";
    cin >> n;
    nThValue(n);
    return 0;
}