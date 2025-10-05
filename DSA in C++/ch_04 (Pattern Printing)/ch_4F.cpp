//triangular pattern with same number in a row
//  1
//  2 2
//  3 3 3
//  4 4 4 4
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter value of n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
    
    
    
  return 0;
}