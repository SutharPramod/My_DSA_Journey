#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1) return nums[0] == target;
        int s = 0 , e = n - 1;

        while(s <= e){
            if(nums[s] == target) return true;
            if(nums[e] == target) return true;
            int m = s + (e-s)/2;
            if (nums[s] == nums[m] && nums[m] == nums[e]) {
                s++;
                e--;
                continue;
            }
            if(nums[m] == target) return true;
            if(nums[s] > nums[m]){
                if(nums[m] <= target && target <= nums[e]) s = m + 1;
                else e = m - 1;
            }
            else{
                if(nums[s] <= target && target <= nums[m]) e = m - 1;
                else s = m + 1;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Target exists
    vector<int> nums1 = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0;
    cout << "Test Case 1: " << (sol.search(nums1, target1) ? "True" : "False") << " (Expected: True)" << endl;

    // Test Case 2: Target does not exist
    vector<int> nums2 = {2, 5, 6, 0, 0, 1, 2};
    int target2 = 3;
    cout << "Test Case 2: " << (sol.search(nums2, target2) ? "True" : "False") << " (Expected: False)" << endl;

    // Test Case 3: Ambiguous duplicate boundaries
    vector<int> nums3 = {1, 0, 1, 1, 1};
    int target3 = 0;
    cout << "Test Case 3: " << (sol.search(nums3, target3) ? "True" : "False") << " (Expected: True)" << endl;

    return 0;
}