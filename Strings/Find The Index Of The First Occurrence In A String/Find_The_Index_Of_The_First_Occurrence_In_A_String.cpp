#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0 , j = 0 , n = haystack.size() , m = needle.size();
        
        for(int i = 0 ; i <= n - m; i++){
            int cnt = 0;
            int j = 0;
            while(j < m && haystack[i + j] == needle[j]){
                cnt++;
                j++;
            }
            if(j == m) return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string haystack1 = "sadbutsad";
    string needle1 = "sad";
    cout << "Test 1: " << solution.strStr(haystack1, needle1) << " (Expected: 0)" << endl;
    
    // Test Case 2
    string haystack2 = "leetcode";
    string needle2 = "leeto";
    cout << "Test 2: " << solution.strStr(haystack2, needle2) << " (Expected: -1)" << endl;
    
    return 0;
}