// here we will find sum of odd number from 1 to n using do while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    do{   
        sum=sum+i;
        i+=2;     
      }while(i<n);
    cout<<"sum is: "<<sum;
    
  return 0;
}