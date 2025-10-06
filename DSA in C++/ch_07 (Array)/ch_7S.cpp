//Maximum subarray sum (Brute force approach) TimeComplexity --> O(n^2)
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    int maxSum=INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum=0;
        for (int end = st; end < n ; end++)
        {
            currentSum += arr[end];
            maxSum= max(currentSum, maxSum);
        }
        
    }
    cout<<"Maximum sum of subArray is:"<<maxSum;
  return 0;
}