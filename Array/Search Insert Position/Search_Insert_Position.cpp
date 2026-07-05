#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0 , h = n - 1;
        if(n == 1 && nums[0] >= target) return 0;
        if(n == 1 && nums[0] < target) return 1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(nums[m] == target) return m;
            else if(nums[m] > target) h = m - 1;
            else l = m + 1;
        }
        return l;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};

    // Test Case 1: Target exists in the array
    cout << "Target 5: " << sol.searchInsert(nums, 5) << " (Expected: 2)" << endl;

    // Test Case 2: Target is missing (belongs in the middle)
    cout << "Target 2: " << sol.searchInsert(nums, 2) << " (Expected: 1)" << endl;

    // Test Case 3: Target is missing (belongs at the end)
    cout << "Target 7: " << sol.searchInsert(nums, 7) << " (Expected: 4)" << endl;

    return 0;
}