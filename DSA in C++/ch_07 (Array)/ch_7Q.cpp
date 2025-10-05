// check for an element is present or not in a sorted array
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target)
{
  int start = 0, end = arr.size() - 1;
  while (start <= end)
  {
    int mid = start+(end-start) / 2;
    if (target > arr[mid])
    {
      start = mid + 1;
    }
    else if (target < arr[mid])
    {
      end=mid-1;
    }
    else{
      return mid;
    }
  }
  return -1;
}
int main()
{
  vector<int>arr1={-1,0,3,4,5,9,12}; // odd no. of element
  int target1=4;

  vector<int>arr2={-1,0,3,5,9,12}; // odd no. of element
  int target2=9;
  cout<<"element found at index:"<<binarySearch(arr1,target1)<<endl;
  cout<<"element found at index:"<<binarySearch(arr2,target2);


  return 0;
}