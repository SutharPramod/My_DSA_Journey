#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countHomogenous(string s) {
        long long count = 0;
        long long currentStreak = 0;
        int MOD = 1e9 + 7;
        
        for (int i = 0; i < s.length(); ++i) {
            if (i > 0 && s[i] == s[i - 1]) {
                currentStreak++;
            } else {
                currentStreak = 1;
            }
            count = (count + currentStreak) % MOD;
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    
    string s1 = "abbcccaa";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.countHomogenous(s1) << endl; // Expected: 13
    
    string s2 = "xy";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.countHomogenous(s2) << endl; // Expected: 2
    
    string s3 = "zzzzz";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << sol.countHomogenous(s3) << endl; // Expected: 15
    
    return 0;
}