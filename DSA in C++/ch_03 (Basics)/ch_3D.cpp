//Print Odd Numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i+=2)
    {
        cout<<i<<" ";
    }
    
  return 0;
}