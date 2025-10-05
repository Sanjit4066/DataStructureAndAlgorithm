// here i will make function to find weather a number is prime or not
#include<iostream>
using namespace std;
int checkPrime(int n){
    int i;
    if (n<1)
    {
        cout<<"invalid input";
        return 0;
    }
    for ( i = 2; i*i<=n; i++) 
    {
        if (n%i==0)
        {
          cout<<n<<" is not a prime number";
          return 0;
        }
    }
     cout<<n<<" is a prime number";
        return 1;
    
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    checkPrime(n);
  return 0;
}