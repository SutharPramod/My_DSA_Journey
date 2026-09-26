#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.size() - 1, len = 0;

        while(s[idx] == ' '){
            idx--;
        }

        if(idx >= 0){
            while(idx >= 0 && s[idx] != ' '){
                len++;
                idx--;
            }
        }
        return len;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "Hello World";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: " << solution.lengthOfLastWord(s1) << endl;
    
    // Test Case 2
    string s2 = "   fly me   to   the moon  ";
    cout << "Input: \"" << s2 << "\"" << endl;
    cout << "Output: " << solution.lengthOfLastWord(s2) << endl;

    return 0;
}