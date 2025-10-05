//Here we will find whether a number is prime or not with the help of for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n <= 1){
        cout<<"Given number "<<n<<" is not a prime number.";
        return 0;
    }

    int i;
    for (i = 2; i <= n/2; i++)
    {
        if(n % i == 0){
            cout<<"Given number "<<n<<" is not a prime number.";
            break;
        }
    }

    if(i > n/2){   // loop completed fully, no divisor found
        cout<<"Given number "<<n<<" is a prime number.";
    }

    return 0;
}
