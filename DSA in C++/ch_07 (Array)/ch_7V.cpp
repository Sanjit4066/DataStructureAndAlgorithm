// First and last Occurance of an element in an array where we have given a target element we have to return its first index and last index
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,3,3,5,3,6,5,3,8,9};
    int target=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxIdx=-1,minIdx=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
         if(minIdx==-1){
            minIdx=i;
         }  
         maxIdx=i; 
        }
        
    }
    cout<<"Index Value of first Occurance is:"<<minIdx<< " and "<<"Index value for last occurance is:"<<maxIdx;
    
  return 0;
}