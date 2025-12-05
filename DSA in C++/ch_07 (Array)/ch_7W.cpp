// I m finding peak of a mountain of an array
// linear search. Time Complexity --> O(n)
#include <iostream>
#include <vector>
using namespace std;
int peakIndexValue(vector<int> &arr, int n)
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            idx = i;
            break;
        }
    }
    return idx;
}
int main()
{
    vector<int> nums = {1, 2, 3, 5, 5, 6, 2, 1, 3};
    int n = nums.size();
    cout << "peak index is:" << peakIndexValue(nums, n);

    return 0;
}