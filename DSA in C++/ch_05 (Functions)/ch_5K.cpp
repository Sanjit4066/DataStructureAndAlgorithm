// here i m writing a function to find prime number from i to n
#include <iostream>
using namespace std;
void primeNumbers(int n)
{
    for (int number = 2; number <= n; number++)
    {
        bool isPrime = true;
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << number << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter value of n:";
    cin >> n;
    primeNumbers(n);
    return 0;
}