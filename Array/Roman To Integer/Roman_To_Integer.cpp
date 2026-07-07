#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int val(char ch) {
        if (ch == 'I')
            return 1;
        if (ch == 'V')
            return 5;
        if (ch == 'X')
            return 10;
        if (ch == 'L')
            return 50;
        if (ch == 'C')
            return 100;
        if (ch == 'D')
            return 500;
        if (ch == 'M')
            return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if(i < n - 1 && val(s[i]) < val(s[i+1])) ans-=val(s[i]);
            else ans+=val(s[i]);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard additive sequence
    string s1 = "LVIII"; // L(50) + V(5) + III(3) = 58
    
    // Test Case 2: Subtractive sequences mixed in
    string s2 = "MCMXCIV"; // M(1000) + CM(900) + XC(90) + IV(4) = 1994

    cout << "s = \"LVIII\":   " << sol.romanToInt(s1) << " (Expected: 58)" << endl;
    cout << "s = \"MCMXCIV\": " << sol.romanToInt(s2) << " (Expected: 1994)" << endl;

    return 0;
}