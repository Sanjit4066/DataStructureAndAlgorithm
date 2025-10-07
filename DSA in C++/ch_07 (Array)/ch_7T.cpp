// Kadane's algorithm most optimized way to find maximum sub array sum
#include<iostream>
using namespace std;
int subArraySum(int arr[],int n){
    int currSum=0,  maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }
    
    return maxSum;
}
int main(){
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;
    //int size = sizeof(nums) / sizeof(nums[0]); calculate size of array in cpp
    cout<<"Maximum Subarray Sum is:"<<subArraySum(nums,size);
  return 0;
}