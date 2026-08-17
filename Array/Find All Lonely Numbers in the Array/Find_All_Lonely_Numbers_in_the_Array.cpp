#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> lones;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n == 1) return {nums[0]};
        if(nums[1] - nums[0] > 1) lones.push_back(nums[0]);
        if(nums[n-1] - nums[n-2] > 1) lones.push_back(nums[n-1]);
        for(int i = 1 ; i < n - 1 ; i++){
            bool f = false;
            if(nums[i] - nums[i - 1] <= 1) f = true;
            if(nums[i + 1] - nums[i] <= 1) f = true;
            if(!f) lones.push_back(nums[i]);
        }
        return lones;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {10, 6, 5, 8};
    vector<int> res1 = sol.findLonely(nums1);
    cout << "Test Case 1: [ ";
    for (int num : res1) cout << num << " ";
    cout << "] (Expected: [10, 8] or [8, 10])" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 3, 5, 3};
    vector<int> res2 = sol.findLonely(nums2);
    cout << "Test Case 2: [ ";
    for (int num : res2) cout << num << " ";
    cout << "] (Expected: [1, 5])" << endl;

    return 0;
}