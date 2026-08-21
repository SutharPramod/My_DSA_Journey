#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0 , e = n - 1;
        if(n == 1) return nums[0];
        while(s < e){
            int m = s + (e-s)/2;
            if(nums[m] > nums[e]) s = m + 1;
            else if(nums[m] < nums[e]) e = m;
            else e--;
        }
        return nums[s];
    }
};

int main() {
    Solution sol;

    // Test Case 1: [1, 3, 5] (Not rotated)
    vector<int> nums1 = {1, 3, 5};
    cout << "Test Case 1: " << sol.findMin(nums1) << " (Expected: 1)" << endl;

    // Test Case 2: [2, 2, 2, 0, 1]
    vector<int> nums2 = {2, 2, 2, 0, 1};
    cout << "Test Case 2: " << sol.findMin(nums2) << " (Expected: 0)" << endl;

    // Test Case 3: [10, 1, 10, 10, 10]
    vector<int> nums3 = {10, 1, 10, 10, 10};
    cout << "Test Case 3: " << sol.findMin(nums3) << " (Expected: 1)" << endl;

    return 0;
}