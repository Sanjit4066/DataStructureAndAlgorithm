// Binary search through recursive approach
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr,int tar, int st, int end){
    if (st<=end)
    {
        int mid= st+(end-st)/2;
        if (tar>arr[mid])
        {
           binarySearch(arr,tar,mid+1,end);
        }
        else if (tar<arr[mid])
        {
            binarySearch(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }
        
    }
    return -1; // show that element is not present or found
    
}
int main()
{
  vector<int>arr1={-1,0,3,4,5,9,12}; // odd no. of element
  int target1=4;
  int n=arr1.size();

  
  cout<<"element found at index:"<<binarySearch(arr1,target1,0,n-1)<<endl;
  
  


  return 0;
}
