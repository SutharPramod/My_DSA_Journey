#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums) sum+= x;
        if(sum % 2 != 0) return false;
        sum /= 2;
        bool dp[sum+1];
        for(int i = 1 ; i <=sum ; i++) dp[i] = false;
        dp[0] = true;
        for(int x : nums){
            int j = sum;
            while(j >= x){
                if(dp[j - x]) dp[j] = true;
                if(dp[sum]) return true;
                j--;
            }
        }

        return dp[sum];
    }
};

int main() {
    Solution sol;

    // Test Case 1: Can be partitioned into [1, 5, 5] and [11]
    vector<int> nums1 = {1, 5, 11, 5};
    // Expected: True

    // Test Case 2: Total sum is 11 (odd) -> impossible
    vector<int> nums2 = {1, 2, 3, 5};
    // Expected: False

    cout << "Test Case 1: " << (sol.canPartition(nums1) ? "True" : "False") << " (Expected: True)" << endl;
    cout << "Test Case 2: " << (sol.canPartition(nums2) ? "True" : "False") << " (Expected: False)" << endl;

    return 0;
}