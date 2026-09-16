#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n ; i ++){
            int val = abs(nums[i]);

            if(nums[val - 1] < 0){
                ans.push_back(val);
            }

            nums[val - 1] =  -(abs(nums[val - 1]));
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    auto res1 = sol.findDuplicates(nums1);
    cout << "Test Case 1 Output: [ ";
    for (int x : res1) cout << x << " ";
    cout << "]\n(Expected: [2 3] or [3 2])\n" << endl;

    // Test Case 2
    vector<int> nums2 = {1, 1, 2};
    auto res2 = sol.findDuplicates(nums2);
    cout << "Test Case 2 Output: [ ";
    for (int x : res2) cout << x << " ";
    cout << "]\n(Expected: [1])\n" << endl;

    // Test Case 3
    vector<int> nums3 = {1};
    auto res3 = sol.findDuplicates(nums3);
    cout << "Test Case 3 Output: [ ";
    for (int x : res3) cout << x << " ";
    cout << "]\n(Expected: [])" << endl;

    return 0;
}