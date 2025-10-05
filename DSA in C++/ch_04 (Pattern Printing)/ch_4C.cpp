//Here I am printing square pattern
#include<iostream>
using namespace std;
int main(){
    int n;int num=1; //num is out of the loop so its value will not reset after every iteration.
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n;i++){ //outer loop decide number of lines
        for (int j = 1; j <= n; j++) // inner loop print star
        {
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
        
    }
    
  return 0;
}