#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxLength = 0;

        int left = 0;
        int right = 0;
        unordered_set<char> Set;

        for (int right = 0; right < n; right++)
        {
            while (Set.find(s[right]) != Set.end())
            {
                Set.erase(s[left]);
                left++;
            }

            Set.insert(s[right]);
            maxLength = max(maxLength , right - left + 1);
        }

        return maxLength;
    }
};

int main()
{
    Solution sol;

    // Test Case 1: Standard case
    string s1 = "abcabcbb";
    // Expected: 3 ("abc")

    // Test Case 2: All repeating
    string s2 = "bbbbb";
    // Expected: 1 ("b")

    // Test Case 3: Substring in the middle
    string s3 = "pwwkew";
    // Expected: 3 ("wke")

    cout << "Test 1 (\"" << s1 << "\"): " << sol.lengthOfLongestSubstring(s1) << " (Expected: 3)" << endl;
    cout << "Test 2 (\"" << s2 << "\"): " << sol.lengthOfLongestSubstring(s2) << " (Expected: 1)" << endl;
    cout << "Test 3 (\"" << s3 << "\"): " << sol.lengthOfLongestSubstring(s3) << " (Expected: 3)" << endl;

    return 0;
}