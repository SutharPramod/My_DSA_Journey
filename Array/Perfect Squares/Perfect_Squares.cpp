#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, n);
        dp[0] = 0;
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j * j <= i; ++j) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        
        return dp[n];
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    int n1 = 12;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << sol.numSquares(n1) << endl; // Expected: 3
    
    // Test Case 2
    int n2 = 13;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << sol.numSquares(n2) << endl; // Expected: 2
    
    return 0;
}