#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        vector<int> dp = vector<int>(n+1,-1);
        return helper(n,dp);
    }
    int helper(int n , vector<int> &dp){
        if (n <= 2) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = helper(n-1,dp) + helper(n-2,dp);
    }
};

int main() {
    Solution sol;

    // Test Case 1: n = 2
    // Ways: [1 step + 1 step], [2 steps]
    int n1 = 2;
    // Expected Output: 2

    // Test Case 2: n = 3
    // Ways: [1+1+1], [1+2], [2+1]
    int n2 = 3;
    // Expected Output: 3

    // Test Case 3: n = 4
    // Ways: [1+1+1+1], [1+1+2], [1+2+1], [2+1+1], [2+2]
    int n3 = 4;
    // Expected Output: 5

    cout << "Test Case 1 (n=" << n1 << "): " << sol.climbStairs(n1) << " (Expected: 2)" << endl;
    cout << "Test Case 2 (n=" << n2 << "): " << sol.climbStairs(n2) << " (Expected: 3)" << endl;
    cout << "Test Case 3 (n=" << n3 << "): " << sol.climbStairs(n3) << " (Expected: 5)" << endl;

    return 0;
}