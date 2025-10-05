// 1 1 1 1 
//   2 2 2
//     3 3
//       4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i;
    for ( i = 0; i < n; i++)
    {
       for (int j = 1; j <= i; j++)
       {
           cout<<" ";
       }
        for (int j = 0; j<n-i; j++)
    {
        cout<<i+1;
    }
       cout<<endl;
       
    }
   
    
    

  return 0;
}
