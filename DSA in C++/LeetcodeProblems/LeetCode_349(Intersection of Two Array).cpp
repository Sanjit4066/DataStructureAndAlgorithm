// naive approach(BruteForce Appraoach)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {

                    // check for duplicates in ans
                    bool exists = false;
                    for (int k = 0; k < ans.size(); k++) {
                        if (ans[k] == nums1[i]) {
                            exists = true;
                            break;
                        }
                    }

                    if (!exists) {
                        ans.push_back(nums1[i]);
                    }
                    break; // stop scanning nums2 for this element
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
