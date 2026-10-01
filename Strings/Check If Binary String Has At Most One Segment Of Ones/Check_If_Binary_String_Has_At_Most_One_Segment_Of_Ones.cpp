#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool f = false;
        int n = s.size();
        if(n == 1 || n == 2) return true;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                f = true;
            }else if(s[i] == '1' && f){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string s1 = "1001";
    bool result1 = solution.checkOnesSegment(s1);
    cout << "Input: " << s1 << " | Output: " << (result1 ? "true" : "false") << " (Expected: false)" << endl;
    
    // Test Case 2
    string s2 = "110";
    bool result2 = solution.checkOnesSegment(s2);
    cout << "Input: " << s2 << " | Output: " << (result2 ? "true" : "false") << " (Expected: true)" << endl;
    
    return 0;
}