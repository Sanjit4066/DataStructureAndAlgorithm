// find pairs sum of element in an array 
// we will assume (1,3) and (3,1) same  as sum will be same
#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    for (int  st = 0; st < 4; st++)
    {
        for (int end = st+1; end < 4; end++)
        {
            cout<<arr[st]<<","<<arr[end]<<" ";
            cout<<"sum of pair is:"<<arr[st]+arr[end]<<endl;
        }
        
    }
    
  return 0;
}