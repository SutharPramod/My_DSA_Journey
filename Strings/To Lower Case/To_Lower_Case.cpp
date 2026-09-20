#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            int idx = ch;
            if(idx >= 65 && idx <= 90){
                s[i] = (char) (idx + 32);
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string s1 = "Hello";
    cout << "Input: " << s1 << " | Output: " << sol.toLowerCase(s1) << endl;

    // Test Case 2
    string s2 = "LOVELY";
    cout << "Input: " << s2 << " | Output: " << sol.toLowerCase(s2) << endl;

    return 0;
}