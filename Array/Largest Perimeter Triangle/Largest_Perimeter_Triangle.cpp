#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        for(int i = nums.size() - 1 ; i >= 2 ; i--){
            if(nums[i] < (nums[i - 1] + nums[i - 2])) return (nums[i] + nums[i-1] + nums[i-2]);
        }

        return 0;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {2, 1, 2};
    cout << "Test Case 1: " << sol.largestPerimeter(nums1) << " (Expected: 5)" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 2, 1, 10};
    cout << "Test Case 2: " << sol.largestPerimeter(nums2) << " (Expected: 0)" << endl;

    // Test Case 3
    vector<int> nums3 = {3, 6, 2, 3};
    cout << "Test Case 3: " << sol.largestPerimeter(nums3) << " (Expected: 8)" << endl;

    return 0;
}