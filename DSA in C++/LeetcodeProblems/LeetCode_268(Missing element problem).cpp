// In this problem we have given a range of numbers from that we have to find out the number of element missing from that.Only one element is missing
// Nums={0,1,3,4,6,7,5,8,9} Missing number is 2 we don't have the sorted array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingEle(vector<int>nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int ans =0;
    
    int range = nums[n-1]+1; // range is always start from 0
    if(n == range){
        return -1;
    }
    else{
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            sum+=nums[i];
        }
        ans = n*(n+1)/2 - sum;
    }
    return ans;
}
int main(){
  vector<int>nums = {0,1,3,4,6,7,5,8,9};
  int result = missingEle(nums);
  cout<<"Missing Element: "<<result;
  
  return 0;
}