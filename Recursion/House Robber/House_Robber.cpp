#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int fun(vector<int>& nums , int i , int n , int free ,vector<vector<int>> &dp){
        if(i == n) return 0;

        if(dp[i][free] != -1) return dp[i][free];

        if(free == 0) return dp[i][free] = fun(nums , i + 1 , n , 1 , dp);

        int c1 = nums[i] + fun(nums , i + 1, n , 0 , dp);
        int c2 = fun(nums , i + 1 , n , 1 , dp);

        return dp[i][free] = max(c1,c2);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n , vector<int>(2,-1));

        return fun(nums , 0 , n , 1 , dp);
    }
};

int main() {
    Solution sol;

    // Test Case 1: [1, 2, 3, 1]
    // Rob House 1 (1) + House 3 (3) = 4
    vector<int> nums1 = {1, 2, 3, 1};

    // Test Case 2: [2, 7, 9, 3, 1]
    // Rob House 1 (2) + House 3 (9) + House 5 (1) = 12
    vector<int> nums2 = {2, 7, 9, 3, 1};

    cout << "Test Case 1: " << sol.rob(nums1) << " (Expected: 4)" << endl;
    cout << "Test Case 2: " << sol.rob(nums2) << " (Expected: 12)" << endl;

    return 0;
}