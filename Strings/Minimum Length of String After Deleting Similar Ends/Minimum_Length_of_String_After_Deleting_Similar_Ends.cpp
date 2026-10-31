#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right && s[left] == s[right]) {
            char current_char = s[left];
            
            while (left <= right && s[left] == current_char) {
                left++;
            }
            
            while (right >= left && s[right] == current_char) {
                right--;
            }
        }
        
        return right - left + 1;
    }
};

int main() {
    Solution sol;
    
    string test1 = "ca";
    cout << "Test 1 Output: " << sol.minimumLength(test1) << " (Expected: 2)" << endl;
    
    string test2 = "cabaabac";
    cout << "Test 2 Output: " << sol.minimumLength(test2) << " (Expected: 0)" << endl;
    
    string test3 = "aabccabba";
    cout << "Test 3 Output: " << sol.minimumLength(test3) << " (Expected: 3)" << endl;
    
    return 0;
}