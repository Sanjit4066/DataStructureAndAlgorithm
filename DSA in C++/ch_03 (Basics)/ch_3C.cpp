//Print Odd Numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        cout<<i<<" ";
        i+=2;
    }
    
  return 0;
}