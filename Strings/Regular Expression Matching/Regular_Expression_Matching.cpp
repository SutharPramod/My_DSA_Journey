#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(), n = p.length();
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        dp[0][0] = true;
        
        for (int j = 2; j <= n; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2];
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
            }
        }
        
        return dp[m][n];
    }
};

int main() {
    Solution sol;
    
    string s1 = "aa", p1 = "a*";
    cout << "Test 1 - s: \"" << s1 << "\", p: \"" << p1 << "\" -> " 
         << (sol.isMatch(s1, p1) ? "true" : "false") << endl;
         
    string s2 = "mississippi", p2 = "mis*is*p*.";
    cout << "Test 2 - s: \"" << s2 << "\", p: \"" << p2 << "\" -> " 
         << (sol.isMatch(s2, p2) ? "true" : "false") << endl;
         
    return 0;
}