
#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int> &nums, int k)
{
    int n = nums.size();
    int low = 0;
    int high = k - 1;
    int sum = 0;
    for (int i = low; i <= high; i++)
    {
        sum = sum + nums[i];
    }
    low++, high++;
    int maxSum = sum;
    while (high < n)
    {
        sum = sum + nums[high] - nums[low - 1];
        maxSum = max(sum, maxSum);
        high++, low++;
    }
    return maxSum;
}

int main()
{
    // Write C++ code here
    vector<int> nums = {100, 200, 300, 400, 500};
    int k = 3;
    int result = maxSum(nums, k);
    cout << "Maximum Sum:" << result;
    return 0;
}