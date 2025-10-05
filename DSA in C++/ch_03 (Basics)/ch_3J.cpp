//Here we will find wheather a number is prime or not with the help of while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if (n<=1)
    {
        cout<<"Given number "<<n<<" is not a prime number.";
        return 0;
    }
    
    int i=2;
    while(i*i<=n){
         if(n%i==0){
            cout<<"Given number "<<n<<" is not a prime number.";
            break;
    }
    i++;
}
if (i>n/2)
{
    cout<<"Given number "<<n<<" is a prime number.";
}

    
  return 0;
}