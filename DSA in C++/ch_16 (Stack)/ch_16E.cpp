// Trapping rainwater problem (naive approach).
// TimeComplexity->O(n^2)
#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    int totalWater = 0;

    for (int i = 0; i < n; i++)
    {

        // Find maximum height on the left of i
        int leftMax = 0;
        for (int l = 0; l <= i; l++)
        {
            leftMax = max(leftMax, height[l]);
        }

        // Find maximum height on the right of i
        int rightMax = 0;
        for (int r = i; r < n; r++)
        {
            rightMax = max(rightMax, height[r]);
        }

        // Water trapped at index i
        int water = min(leftMax, rightMax) - height[i];
        if (water > 0)
        {
            totalWater += water;
        }
    }

    return totalWater;
}
int main()
{
    vector<int> height = {5, 1, 4, 1, 2};

    int ans = trap(height);

    cout << "Possible water trap can be:" << ans;
    return 0;
}