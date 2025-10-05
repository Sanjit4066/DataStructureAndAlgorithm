#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n;i++){ //outer loop decide number of lines
        char ch ='A';
        for (int j = 1; j <= n; j++) // inner loop print values
        {
            cout<<" "<<ch; //here character will increase because of increase in ASCII value
            ch+=1;
        }
        cout<<endl;
        
    }
    
  return 0;
}