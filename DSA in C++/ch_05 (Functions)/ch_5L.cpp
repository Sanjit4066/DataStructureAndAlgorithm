// function to print nth fibonacii
// Function to print first n Fibonacci numbers
#include <iostream>
using namespace std;

void fibonacciNumbers(int n)
{
    int a = 0, b = 1;  // first two Fibonacci numbers

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";   // print current number
        int next = a + b;   // calculate next number
        a = b;              // shift forward
        b = next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    fibonacciNumbers(n);  // prints first 10 Fibonacci numbers
    return 0;
}
