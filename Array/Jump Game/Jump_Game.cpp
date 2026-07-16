#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = 0;
        for(int i = 0 ; i < n ; i++){
            if(i > goal) return false;
            goal = max(goal,nums[i] + i);
            if(goal >= n - 1) return true;
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Reachable
    // Path: Index 0 (jump 2) -> Index 2 (jump 1) -> Index 3 (jump 1) -> Last Index
    vector<int> nums1 = {2, 3, 1, 1, 4};

    // Test Case 2: Unreachable
    // No matter what, you will always land on Index 3, which is 0. 
    // You can never cross over to Index 4.
    vector<int> nums2 = {3, 2, 1, 0, 4};

    cout << "Test Case 1: " << (sol.canJump(nums1) ? "True" : "False") << " (Expected: True)" << endl;
    cout << "Test Case 2: " << (sol.canJump(nums2) ? "True" : "False") << " (Expected: False)" << endl;

    return 0;
}