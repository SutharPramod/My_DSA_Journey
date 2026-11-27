#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    cout << "Test Case 1 Output: " << solution.pivotIndex(nums1) << " (Expected: 3)" << endl;
    
    // Test Case 2
    vector<int> nums2 = {1, 2, 3};
    cout << "Test Case 2 Output: " << solution.pivotIndex(nums2) << " (Expected: -1)" << endl;
    
    // Test Case 3
    vector<int> nums3 = {2, 1, -1};
    cout << "Test Case 3 Output: " << solution.pivotIndex(nums3) << " (Expected: 0)" << endl;
    
    return 0;
}