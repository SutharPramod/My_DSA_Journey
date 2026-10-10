#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int k = 0;
        int n = s.size();
        for(int i = 0 ; i <= n ; i++){
            if(i == n || s[i] == ' '){
                reverse(s.begin() + k , s.begin() + i);
                k = i + 1;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "Let's take LeetCode contest";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << solution.reverseWords(s1) << endl;
    
    // Test Case 2
    string s2 = "God Ding";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << solution.reverseWords(s2) << endl;
    
    return 0;
}