/* Insertion Sort. 
   Intution --> In this I will divide array into two parts 0th element will be considered sorted and from 1 to n-1 element unsorted and after that I will take first elemnt of unsorted part and compare it with sorted part if element of sorted part is bigger shift it to right position until you reach last elemnt of sorted part or element of sorted part is smaller (compare from right to left) and then put unsorted element at its correct position.

   time complexity --> O(n^2)
*/
#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while ( j >= 0 && arr[j] > temp) //comparison
        {
          arr[j+1] = arr[j]; //shifting bigger element to  position + 1 (right side)
          j--;
        }
        arr[j+1] = temp;     // putting elemnt in it's correct position
        
    }
    
}
int main(){
  int arr[]={4,1,5,2,3,8,0,9,12,17};
  int n = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}