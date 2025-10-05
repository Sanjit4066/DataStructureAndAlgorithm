// here I'm reversing an array with two pointer approach
#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start=0, end=size-1;
    while (start < end) // this is the condition for either size is even or odd
    {
       swap(arr[start], arr[end]); // swap the value it is inbuilt function
       start++;
       end--;
    }
    
}
int main(){
    int n=8;
    int arr[n]={1,2,3,4,5,6,7,8};
    reverseArray(arr,n);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
  return 0;
}