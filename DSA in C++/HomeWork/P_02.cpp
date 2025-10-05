//  Q.2. Write a Program to reverse an arrays.
#include<iostream>
using namespace std;
void reverseArray(){
    int size=6;
    int arr[size]={1,2,3,4,5,6};
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    reverseArray();
    
  return 0;
}