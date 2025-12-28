// Trapping rainwater problem (naive approach).
//TimeComplexity->O(n)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> height = {5,1,4,1,2};
    int n = height.size();
    int ans = 0;
    int boundary = min(height[0], height[n-1]);
    for (int i = 1; i < n - 1; i++)
    {
        if (boundary >= height[i])
        {
            int waterTrap = boundary - height[i];
            ans += waterTrap;
        }
    }
    cout << "Possible water trap can be:" << ans;
    return 0;
}