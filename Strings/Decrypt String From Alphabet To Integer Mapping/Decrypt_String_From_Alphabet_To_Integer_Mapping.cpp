#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            if ((i + 2) < n && s[i + 2] == '#') {
                int num = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans += 'a' + (num - 1);
                i += 2;
            } else {
                int num = s[i] - '0';
                ans += 'a' + (num - 1);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "10#11#12";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.freqAlphabets(s1) << endl; // Expected: jkab
    
    // Test Case 2
    string s2 = "1326#";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.freqAlphabets(s2) << endl; // Expected: acz
    
    return 0;
}