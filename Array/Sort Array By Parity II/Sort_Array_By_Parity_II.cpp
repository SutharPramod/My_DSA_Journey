#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int e = 0 , o = 1;

        while(e < n && o < n){
            while(e < n && nums[e] % 2 == 0) e+=2;
            while(o < n && nums[o] % 2 != 0) o+=2;
            if(e < n && o < n) swap(nums[e],nums[o]);
        }

        return nums;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {4, 2, 5, 7};
    sol.sortArrayByParityII(nums1);
    cout << "Test Case 1 Output: [ ";
    for (int x : nums1) cout << x << " ";
    cout << "]" << endl;

    // Test Case 2
    vector<int> nums2 = {2, 3};
    sol.sortArrayByParityII(nums2);
    cout << "Test Case 2 Output: [ ";
    for (int x : nums2) cout << x << " ";
    cout << "]" << endl;
    return 0;
}