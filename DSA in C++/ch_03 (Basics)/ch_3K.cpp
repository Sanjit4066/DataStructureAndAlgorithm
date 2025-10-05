//Here we will find whether a number is prime or not with the help of for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;   // flag to track primality
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n <= 1){
        cout<<"Given number "<<n<<" is not a prime number.";
        return 0;
    }

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0){
            cout<<"Given number "<<n<<" is not a prime number.";
            isPrime = false;
            break;   // exit loop when divisor is found
        }
    }

    if(isPrime){
        cout<<"Given number "<<n<<" is a prime number.";
    }

    return 0;
}
