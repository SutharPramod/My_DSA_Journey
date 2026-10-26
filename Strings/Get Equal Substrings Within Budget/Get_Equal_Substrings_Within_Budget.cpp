#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int left = 0, currentCost = 0, maxLength = 0;

        for (int right = 0; right < n; ++right) {
            currentCost += abs(s[right] - t[right]);

            while (currentCost > maxCost) {
                currentCost -= abs(s[left] - t[left]);
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "abcd";
    string t1 = "bcdf";
    int cost1 = 3;
    cout << "Test 1 Output: " << sol.equalSubstring(s1, t1, cost1) << " (Expected: 3)" << endl;

    // Test Case 2
    string s2 = "abcd";
    string t2 = "cdef";
    int cost2 = 0;
    cout << "Test 2 Output: " << sol.equalSubstring(s2, t2, cost2) << " (Expected: 0)" << endl;

    return 0;
}