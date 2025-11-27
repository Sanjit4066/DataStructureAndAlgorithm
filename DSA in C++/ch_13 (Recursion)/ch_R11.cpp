// here I'm checking weather the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr, int n){
    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
    
}
int main(){
  vector<int>nums = {1,2,3,4,9,6}; 
  int n=nums.size();
  cout<<isSorted(nums, n);  // output = 0 (False)
  return 0;
}