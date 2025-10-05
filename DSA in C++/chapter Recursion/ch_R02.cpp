// factorial of n using recursive function
#include <iostream>
using namespace std;
int factorial(int n, int acc=1)
{
    if (n <= 0)
    {
        return acc;
    }
    return n * factorial(n - 1, n*acc);
}
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    cout<<factorial(n);
    return 0;
}