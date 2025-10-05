// here we will find sum of number from 1 to n 
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {   
        sum=sum+i;     
    }
    cout<<"sum is: "<<sum;
    
  return 0;
}