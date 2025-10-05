// A 
// B A 
// C B A 
// D C B A 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    char ch= 'A';
    for (int i = 0; i < n; i++)
    {
        ch='A'+i;
        for (int j = i; j >= 0 ; j--)
        {
           cout<<ch--<<" ";
           
        }
        cout<<endl;
    }
    
  return 0;
}