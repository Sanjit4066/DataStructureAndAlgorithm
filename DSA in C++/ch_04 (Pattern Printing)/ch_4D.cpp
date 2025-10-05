//triangular pattern with increasing numbers
//  1
//  2 3
//  4 5 6
#include<iostream>
using namespace std;
int main(){
    int n; int num=1;
    cout<<"enter value of n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j <= i ; j++)
        {
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
    }
    
  return 0;
}