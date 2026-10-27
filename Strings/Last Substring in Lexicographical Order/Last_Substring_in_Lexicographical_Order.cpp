#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string lastSubstring(string s) {
        int i = 0, j = 1, k = 0;
        int n = s.length();
        while (j + k < n) {
            if (s[i + k] == s[j + k]) {
                k++;
            } else if (s[i + k] < s[j + k]) {
                i = max(i + k + 1, j);
                j = i + 1;
                k = 0;
            } else {
                j = j + k + 1;
                k = 0;
            }
        }
        return s.substr(i);
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "abab";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.lastSubstring(s1) << endl; // Expected: "bab"
    
    // Test Case 2
    string s2 = "leetcode";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.lastSubstring(s2) << endl; // Expected: "tcode"
    
    return 0;
}