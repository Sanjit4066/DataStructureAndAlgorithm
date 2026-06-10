// reversing an array with the help of recursion with the help of two pointer
#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& arr, int low, int high){
    if(low >= high){
        return;
    }
    swap(arr[low], arr[high]);
    reverseArray(arr,  low+1, high-1);
}
int main(){
  vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
  int size = nums.size();
  int low = 0;
  int high = size-1;
  reverseArray(nums,low, high );
  for(auto x : nums){
    cout<< x <<" ";
  }
  return 0;
}