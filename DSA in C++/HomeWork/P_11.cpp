//  Q.11. Find all divisors of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    for (int i = 1; i <= n/2; i++)
    {
       if (n%i==0)
       {
        cout<<i<<" ";
       }
       
    }
    
  return 0;
}