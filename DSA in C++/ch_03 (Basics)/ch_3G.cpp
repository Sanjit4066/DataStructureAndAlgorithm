// I want to find the number from 1 to half of the number user entered.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n)
    {   
        if(i>n/2){
        break;
    }
        sum=sum+i;
        i++;
    }
    cout<<"sum of number from 1 to "<<n/2<<" is: "<<sum;
  return 0;
}