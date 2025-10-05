//Here I am printing square pattern with '*'
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n;i++){ //outer loop decide number of lines
        for (int j = 1; j <= n; j++) // inner loop print star
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
  return 0;
}