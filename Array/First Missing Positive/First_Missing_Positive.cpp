#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) swap(nums[nums[i] - 1],nums[i]);
        }
        for(int i = 0; i < n ; i++){
            if(nums[i] != i + 1) return i + 1;
        }
        return n + 1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard out-of-order array
    // After sorting: [1, -1, 3, 4] -> First mismatch at index 1 (value is not 2)
    vector<int> nums1 = {3, 4, -1, 1};
    // Expected Output: 2

    // Test Case 2: All sequential numbers present
    vector<int> nums2 = {1, 2, 0};
    // Expected Output: 3

    cout << "Test Case 1: " << sol.firstMissingPositive(nums1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.firstMissingPositive(nums2) << " (Expected: 3)" << endl;

    return 0;
}