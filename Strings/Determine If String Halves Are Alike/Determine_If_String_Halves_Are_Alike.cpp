#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int n = s.length();
        int countA = 0, countB = 0;

        for (int i = 0; i < n / 2; ++i) {
            if (isVowel(s[i])) {
                countA++;
            }
        }

        for (int i = n / 2; i < n; ++i) {
            if (isVowel(s[i])) {
                countB++;
            }
        }

        return countA == countB;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "book";
    cout << "Test 1: " << (sol.halvesAreAlike(s1) ? "true" : "false") << " (Expected: true)" << endl;

    // Test Case 2
    string s2 = "textbook";
    cout << "Test 2: " << (sol.halvesAreAlike(s2) ? "true" : "false") << " (Expected: false)" << endl;

    return 0;
}