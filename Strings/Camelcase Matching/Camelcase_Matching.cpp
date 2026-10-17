#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> result;
        for (const string& query : queries) {
            result.push_back(matches(query, pattern));
        }
        return result;
    }

private:
    bool matches(const string& query, const string& pattern) {
        int i = 0;
        for (char c : query) {
            if (i < pattern.length() && c == pattern[i]) {
                i++;
            } else if (c >= 'A' && c <= 'Z') {
                return false;
            }
        }
        return i == pattern.length();
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<string> queries1 = {"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
    string pattern1 = "FB";
    vector<bool> result1 = solution.camelMatch(queries1, pattern1);
    
    cout << "Test Case 1 Output: ";
    for (bool b : result1) {
        cout << (b ? "true " : "false ");
    }
    cout << endl;

    // Test Case 2
    vector<string> queries2 = {"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
    string pattern2 = "FoBa";
    vector<bool> result2 = solution.camelMatch(queries2, pattern2);
    
    cout << "Test Case 2 Output: ";
    for (bool b : result2) {
        cout << (b ? "true " : "false ");
    }
    cout << endl;

    return 0;
}