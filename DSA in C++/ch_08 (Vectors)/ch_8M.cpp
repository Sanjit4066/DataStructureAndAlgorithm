// find sum of pairs which should be equal to target sum , as we have given sorted array so we will apply two pointers approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int pairSum = nums[st] + nums[end];
        if (target > pairSum)
        {
            st++;
        }
        else if (target < pairSum)
        {
            end--;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int>nums={2,7,11,15};
    int target=26;
    vector<int>ans=pairSum(nums,target);
    cout<<"Index of element whose sum is equal to "<<target<<":"<<"("<<ans[0]<<","<<ans[1]<<")"<<endl;
    return 0;
}