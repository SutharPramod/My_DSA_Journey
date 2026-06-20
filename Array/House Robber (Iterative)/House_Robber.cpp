#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int p1 = 0;
        int p2 = 0;
        for(int num : nums){
            int curr = max(p1 , num + p2);

            p2 = p1;
            p1 = curr;
        }
        return p1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: [1, 2, 3, 1]
    // Rob House 1 (1) + House 3 (3) = 4
    vector<int> nums1 = {1, 2, 3, 1};

    // Test Case 2: [2, 7, 9, 3, 1]
    // Rob House 1 (2) + House 3 (9) + House 5 (1) = 12
    vector<int> nums2 = {2, 7, 9, 3, 1};

    cout << "Test Case 1: " << sol.rob(nums1) << " (Expected: 4)" << endl;
    cout << "Test Case 2: " << sol.rob(nums2) << " (Expected: 12)" << endl;

    return 0;
}