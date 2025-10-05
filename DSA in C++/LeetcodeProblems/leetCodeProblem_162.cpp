// In this leetcode problem we have to find out peak element by comparing it    with both its previous and next index element.
// So we are solving it via binary search approach and in this we can have multiple outputs.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < nums[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start; // start (or end) will point to the peak element index
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 1};

    int peakIndex = obj.findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;

    return 0;
}
