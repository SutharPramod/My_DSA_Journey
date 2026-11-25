#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        bool seenDigit = false;
        bool seenExponent = false;
        bool seenDot = false;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (isdigit(c)) {
                seenDigit = true;
            } else if (c == '+' || c == '-') {
                // Sign can only appear at the beginning or immediately after 'e'/'E'
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            } else if (c == '.') {
                // Dot cannot appear twice or after an exponent ('e'/'E')
                if (seenDot || seenExponent) {
                    return false;
                }
                seenDot = true;
            } else if (c == 'e' || c == 'E') {
                // Exponent cannot appear twice, and must be preceded by a digit
                if (seenExponent || !seenDigit) {
                    return false;
                }
                seenExponent = true;
                // Reset seenDigit because an integer must follow 'e'/'E'
                seenDigit = false;
            } else {
                // Any other character is invalid
                return false;
            }
        }
        
        return seenDigit;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string test1 = "0";
    cout << "Is \"" << test1 << "\" a valid number? " 
         << (solution.isNumber(test1) ? "true" : "false") << endl;
         
    // Test case 2
    string test2 = "e";
    cout << "Is \"" << test2 << "\" a valid number? " 
         << (solution.isNumber(test2) ? "true" : "false") << endl;

    // Test case 3
    string test3 = "2e10";
    cout << "Is \"" << test3 << "\" a valid number? " 
         << (solution.isNumber(test3) ? "true" : "false") << endl;
         
    return 0;
}