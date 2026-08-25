#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i+=2){
            ans += nums[i];
        }
        return ans;
    }
}; 

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {1, 4, 3, 2};
    // Sorted: [1, 2, 3, 4] -> Pairs: (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
    cout << "Test Case 1: " << sol.arrayPairSum(nums1) << " (Expected: 4)" << endl;

    // Test Case 2
    vector<int> nums2 = {6, 2, 6, 5, 1, 2};
    // Sorted: [1, 2, 2, 5, 6, 6] -> Pairs: (1, 2), (2, 5), (6, 6) -> 1 + 2 + 6 = 9
    cout << "Test Case 2: " << sol.arrayPairSum(nums2) << " (Expected: 9)" << endl;

    return 0;
}