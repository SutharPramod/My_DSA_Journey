#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t idx = word.find(ch);
        if (idx != string::npos) {
            reverse(word.begin(), word.begin() + idx + 1);
        }
        return word;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string word1 = "abcdefd";
    char ch1 = 'd';
    cout << "Input: word = \"" << word1 << "\", ch = '" << ch1 << "'" << endl;
    cout << "Output: \"" << sol.reversePrefix(word1, ch1) << "\"" << endl;
    
    // Test Case 2
    string word2 = "xyxzxe";
    char ch2 = 'z';
    cout << "Input: word = \"" << word2 << "\", ch = '" << ch2 << "'" << endl;
    cout << "Output: \"" << sol.reversePrefix(word2, ch2) << "\"" << endl;

    return 0;
}