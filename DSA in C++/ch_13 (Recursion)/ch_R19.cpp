//Reversing array with the help of recursion with two pointers
#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& arr, int low){
    int n = arr.size();
    if(low >= n/2 ){
        return;
    }
    swap(arr[low], arr[n-low-1]);
    reverseArray(arr, low+1);
}
int main(){
  vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
  int low = 0;
  reverseArray(nums, low);
  for(auto x : nums){
    cout<< x <<" ";
  }
  return 0;
}