#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(char i = 'a' ; i <= 'z' ; i++){
            bool found = false;

            for(char x : sentence){
                if(x == i) found = true;
            }
            if(!found) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Valid Pangram
    string s1 = "thequickbrownfxjmpsoverthelazydog";
    // Expected Output: true (1)

    // Test Case 2: Invalid Pangram (missing 'x')
    string s2 = "leetcode";
    // Expected Output: false (0)

    cout << "Test Case 1: " << (sol.checkIfPangram(s1) ? "true" : "false") << " (Expected: true)" << endl;
    cout << "Test Case 2: " << (sol.checkIfPangram(s2) ? "true" : "false") << " (Expected: false)" << endl;

    return 0;
}