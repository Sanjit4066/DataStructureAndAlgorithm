// find factorial using function
#include <iostream>
using namespace std;
int factorialOfNumber(int n)
{
    int factorial = 1;
    for (int i = 0; i < n; i++)
    {
        factorial *= n - i;
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int factorialResult = factorialOfNumber(n);
    cout << "Factorial of " <<n<<" is:" << factorialResult << endl;

    cout<<"enter second n:";
    cin>>n;
    factorialResult = factorialOfNumber(n);
    cout << "Factorial of " <<n<<" is:" << factorialResult << endl;
     
    cout<<"enter third n:";
    cin>>n;
    factorialResult = factorialOfNumber(n);
    cout << "Factorial of " <<n<<" is:" << factorialResult << endl;
    return 0;
}