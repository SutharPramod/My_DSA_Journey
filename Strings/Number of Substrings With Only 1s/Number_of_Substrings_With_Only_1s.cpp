#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numSub(string s) {
        long long ans = 0;
        long long count = 0;
        long long mod = 1e9 + 7;
        
        for (char c : s) {
            if (c == '1') {
                count++;
                ans = (ans + count) % mod;
            } else {
                count = 0;
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "0110111";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << solution.numSub(s1) << endl; // Expected: 9
    
    // Test Case 2
    string s2 = "101";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << solution.numSub(s2) << endl; // Expected: 2

    return 0;
}