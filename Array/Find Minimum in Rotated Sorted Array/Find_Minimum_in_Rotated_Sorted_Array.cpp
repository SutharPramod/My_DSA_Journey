#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0 , e = n - 1;
        while(s <= e){
            int m = s + (e-s)/2;
            if(nums[m] > nums[n-1]) s = m + 1;
            else e = m - 1;
        }
        return nums[s];
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard rotated array
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test Case 1: " << sol.findMin(nums1) << " (Expected: 1)" << endl;

    // Test Case 2: Rotated 4 times
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test Case 2: " << sol.findMin(nums2) << " (Expected: 0)" << endl;

    // Test Case 3: Array rotated n times (back to original sorted order)
    vector<int> nums3 = {11, 13, 15, 17};
    cout << "Test Case 3: " << sol.findMin(nums3) << " (Expected: 11)" << endl;

    return 0;
}