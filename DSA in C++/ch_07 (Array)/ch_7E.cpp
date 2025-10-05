// demonstrating example of pass by refrence
#include<iostream>
using namespace std;
void changeValue(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
    cout<<"In changeValue function"<<endl;
    
}
int main(){
    int arr[]={1,2,3,5};
    int  size=4;
    changeValue(arr,size);
    cout<<"In main function"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
  return 0;
}