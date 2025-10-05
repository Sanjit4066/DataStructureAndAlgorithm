//triangular pattern with same character in a row
//  A
//  B B
//  C C C
//  D D D D
#include<iostream>
using namespace std;
int main(){
    int n;  char ch='A';
    cout<<"enter value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {  
        for (int j = 1; j <= i; j++)
        {
            cout<<" "<<ch;
            
            
        }
        cout<<endl;
        ch++;
    }
    
    
    
  return 0;
}