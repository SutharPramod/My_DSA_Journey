#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ts = 0;
        for(int x : nums) ts+=x;

        if((ts + target) % 2 != 0 || (ts + target) < 0) return 0;
        int sum = (ts + target) / 2;

        vector<int> dp (sum+1,0);
        dp[0] = 1;

        for(int x : nums){
            int j = sum;
            while(j >= x){
                dp[j] = (dp[j] + dp[j - x]);
                j--;
            }
        }

        return dp[sum];
    }
};

int main() {
    Solution sol;

    // Test Case: nums = [1, 1, 1, 1, 1], target = 3
    // TotalSum = 5. subsetTarget = (3 + 5) / 2 = 4.
    // Looking for subsets that sum to 4.
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;

    cout << "Total ways: " << sol.findTargetSumWays(nums, target) << " (Expected: 5)" << endl;

    return 0;
}