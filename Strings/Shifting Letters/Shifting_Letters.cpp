#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long currentShift = 0;
        int n = s.length();
        
        for (int i = n - 1; i >= 0; --i) {
            currentShift = (currentShift + shifts[i]) % 26;
            int shiftAmount = currentShift;
            
            char c = s[i];
            char newChar = (c - 'a' + shiftAmount) % 26 + 'a';
            s[i] = newChar;
        }
        
        return s;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "abc";
    vector<int> shifts1 = {3, 5, 9};
    cout << "Input: s = \"abc\", shifts = [3, 5, 9]" << endl;
    cout << "Output: \"" << sol.shiftingLetters(s1, shifts1) << "\"" << endl;
    
    // Test Case 2
    string s2 = "aaa";
    vector<int> shifts2 = {1, 2, 3};
    cout << "Input: s = \"aaa\", shifts = [1, 2, 3]" << endl;
    cout << "Output: \"" << sol.shiftingLetters(s2, shifts2) << "\"" << endl;
    
    return 0;
}